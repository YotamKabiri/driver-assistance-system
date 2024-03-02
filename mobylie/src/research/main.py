import numpy as np

from CarDetection import detectCar
from SignDetection import detectSign
import imgDetector
import cv2
import videoLoader
import time
import CCA_model as cca
from mobylie.src.research.database import databaseManger
# from src.research.database import databaseManger
import kalman_filter
import segmentation as seg

def main():
    dataManager = databaseManger.Database_Manger("database/database.db")
    # i need to copy the y so it will fit
    dictatorX = dataManager.create_dictionary(dataManager.X_TABLE_NAME)
    dictatorY = dataManager.create_dictionary(dataManager.Y_TABLE_NAME)
    predictorX = cca.cca_model(dictatorX)
    predictorY = cca.cca_model(dictatorY)
    kfX = kalman_filter.KalmanFilter(
        # https://www.fxp.co.il
        np.array([[1, 1, 0.5], [0, 1, 1], [0, 0, 1]]),  # f
        [[0.2, 0.3, 0.35], [0, 0.3, 0.35], [0, 0, 0.35]],  # the certenty presentage
        [[1, 0, 0], [1, 0, 0], [1, 0, 0]],  # to adjust the matrix
        [0, 0, 0],  # will change every time
        [[0, 0, 0], [0, 0, 0], [0, 0, 0]],  # will change every time
        [[predictorX.certentry, 1, 1], [1, predictorX.certentry, 1], [1, 1, predictorX.certentry]]
        # the certenty precentage of CCA
    )
    kfY = kalman_filter.KalmanFilter(
        # https://www.fxp.co.il
        np.array([[1, 1, 0.5], [0, 1, 1], [0, 0, 1]]),  # f
        [[0.2, 0.3, 0.35], [0, 0.3, 0.35], [0, 0, 0.35]],  # the certenty presentage
        [[1, 0, 0], [1, 0, 0], [1, 0, 0]],  # to adjust the matrix
        [0, 0, 0],  # will change every time
        [[0, 0, 0], [0, 0, 0], [0, 0, 0]],  # will change every time
        [[predictorX.certentry, 1, 1], [1, predictorX.certentry, 1], [1, 1, predictorX.certentry]]
        # the certenty precentage of CCA
    )
    loader = videoLoader.VideoLoader("../videos/highway1.mp4")

    dettector = imgDetector.imgDetector()
    loader.nextFrame()#so it will have prevImg
    while loader.nextFrame():
        start_time = time.time()
        carRes = detectCar(loader._img._bgrImg)
        signRes = detectSign((loader._img._bgrImg))
        signRes +="\n"+ seg.dettect(loader._img._bgrImg)
        dettector.updateCar(carRes)
        dettector.updateSign(signRes)
        dettector.updateOurCar()
        ################################test###################################
        for car in dettector.signArray:
            top_left = car.bounding_box.getTopLeftPoint(car.bounding_box.x, car.bounding_box.y, car.bounding_box.width,
                                                        car.bounding_box.length)
            bottom_right = car.bounding_box.getBottomRightPoint(car.bounding_box.x, car.bounding_box.y,
                                                                car.bounding_box.width, car.bounding_box.length)
            intTopLeft = (int(top_left[0]), int(top_left[1]))  # parse from float to int
            intBottomRight = (int(bottom_right[0]), int(bottom_right[1]))  # parse from float to int
            cv2.rectangle(loader._img._bgrImg, intTopLeft, intBottomRight, (255, 0, 0), 1)

            text = str(int(car.data.position.x)) + " " \
                   + str(int(car.data.position.y)) + " " \
                   + str(int(car.distance))
            text_position = (intTopLeft[0], intBottomRight[1] - 10)
            font_face = cv2.FONT_HERSHEY_SIMPLEX
            font_scale = 0.5
            text_color = (255, 0, 0)
            text_thickness = 1
            cv2.putText(loader._img._bgrImg, text,
                        text_position, font_face,
                        font_scale, text_color, text_thickness)
        ################################test###################################
        ########################test############################
        print("-------------------------our car-------------------------------")
        print((dettector.ourCar.data.position.x, dettector.ourCar.data.position.y))
        print((dettector.ourCar.data.velocity.x, dettector.ourCar.data.velocity.y))
        print((dettector.ourCar.data.aceloration.x, dettector.ourCar.data.aceloration.y))
        ########################test############################

        ########################test############################

        dettector.calcOpticalFlow(loader._prevImg._bgrImg,loader._img._bgrImg)
        print("--------------------------avg------------------------")
        ratio=dettector.calcAvgRatio()
        print(dettector.calcAvgRatio())
        print(dettector.calcway(ratio))
        print("--------------------------avg------------------------")

        cv2.imshow("bgr", loader._img._bgrImg)
        cv2.imshow("hsl", loader._img._hlsImg)
        end_time = time.time()
        print("time:")
        time_passed = end_time - start_time
        print(time_passed)

        print("-------------------prediction-------------------")
        #                                                          time passed
        Zx = predictorX.predict(cca.cca_model.getValues(dettector, 0, 1))
        Zy = predictorY.predict(cca.cca_model.getValues(dettector, 1, 1))
        kfX.predict([Zx, 0, 0])
        kfY.predict([Zy, 0, 0])
        print("do i need to wyrry?")
        print(
            imgDetector.imgDetector.alertUser
                (
                    1,
                    dettector.carArray,
                    kfX.X,
                    kfY.X
                )
              )
        print(kfX.X)
        print(Zx)
        print(kfY.X)
        print(Zy)

        kfX.update([dettector.ourCar.data.position.x,
                    dettector.ourCar.data.velocity.x,
                    dettector.ourCar.data.aceloration.x])
        kfY.update([dettector.ourCar.data.position.y,
                    dettector.ourCar.data.velocity.y,
                    dettector.ourCar.data.aceloration.y])
        print(kfX.X)
        print(kfY.X)
        if dataManager.collect_data:
            if dataManager.formerXData != 0 and dataManager.formerYData != 0:
                dataManager.insert_Data(dataManager.X_TABLE_NAME, dataManager.formerXData[0],
                                        dettector.ourCar.data.position.x - dataManager.formerXData[1])
                dataManager.insert_Data(dataManager.Y_TABLE_NAME, dataManager.formerYData[0],
                                        dettector.ourCar.data.position.y - dataManager.formerYData[1])
            dataManager.formerXData = (
                cca.cca_model.getValues(dettector, 0, time_passed)
                , dettector.ourCar.data.position.x)
            dataManager.formerYData = (
                cca.cca_model.getValues(dettector, 1, time_passed)
                , dettector.ourCar.data.position.y)

        if cv2.waitKey(1) == ord('q'):
            break


if __name__ == '__main__':
    main()
