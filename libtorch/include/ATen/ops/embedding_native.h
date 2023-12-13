#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API at::Tensor embedding_symint(const at::Tensor & weight, const at::Tensor & indices, c10::SymInt padding_idx=-1, bool scale_grad_by_freq=false, bool sparse=false);
TORCH_API at::Tensor & embedding_out_symint(const at::Tensor & weight, const at::Tensor & indices, c10::SymInt padding_idx, bool scale_grad_by_freq, bool sparse, at::Tensor & out);
TORCH_API at::Tensor NestedTensor_embedding(const at::Tensor & weight, const at::Tensor & indices, int64_t padding_idx=-1, bool scale_grad_by_freq=false, bool sparse=false);
} // namespace native
} // namespace at
