//////////////////general includes//////////////////
#include <iostream>
#include "imgDetector.h"
#include "vidLoader.h"
//////////////////general includes//////////////////

#include <opencv2/opencv.hpp>

int main() {
    try
    {
        imgDetector detector;
        std::string const VIDEO_NAME = "highway1.mp4";
        bool const LIVE = false;
        cv::namedWindow("test", cv::WINDOW_AUTOSIZE);
        cv::VideoCapture cap;
        vidLoader loader("videos/" + VIDEO_NAME);
        //vidLoader loader("");
        cv::Mat frame = loader.getNextFrame();
        while (!frame.empty())
        {
            time_t start, end;
            time(&start);
            std::string CarRes = detector.dettectCar(loader.frameFileName);
            std::string signRes = detector.dettectSign(loader.frameFileName);
            detector.updateCars(CarRes);
            detector.updateSigns(signRes);
            for (auto it = detector.foundVehicles.begin(); it != detector.foundVehicles.end(); it++)
            {
                int* data = (*it)->getDataImg();
                cv::Point topLeft(data[X] - data[WIDTH] / 2, data[Y] + data[HIGHT] / 2);
                cv::Point bottomRight(data[X] + data[WIDTH] / 2, data[Y] - data[HIGHT] / 2);
                cv::Rect rectangle(topLeft, bottomRight);
                cv::rectangle(frame, rectangle, cv::Scalar(255, 0, 0), 1);
                std::string text = (* it)->getName();
                cv::Point textPosition(topLeft.x, topLeft.y + 10);

                cv::putText(frame, text, textPosition, cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);

            }

            time(&end);
            
            std::cout
                <<"\n\n\n\n\n"
                << "time:"
                << end - start
                <<"\n\n\n\n\n";

            if (cv::waitKey(30) >= 0)
            {
                break;
            }
            cv::imshow("test", frame);

            frame = loader.getNextFrame();

        }
    }
    catch (const py::error_already_set& e) {
        std::cerr << "Pythonn error: " << e.what() << std::endl;
    }
    cv::destroyAllWindows();
    return 0;
}
