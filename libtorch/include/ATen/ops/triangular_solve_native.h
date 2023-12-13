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
#include <ATen/ops/triangular_solve_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_triangular_solve_out : public at::meta::structured_triangular_solve {
void impl(const at::Tensor & self, const at::Tensor & A, bool upper, bool transpose, bool unitriangular, const at::Tensor & X, const at::Tensor & M);
};
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> triangular_solve_out_sparse_csr_cpu(const at::Tensor & self, const at::Tensor & A, bool upper, bool transpose, bool unitriangular, at::Tensor & X, at::Tensor & M);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> triangular_solve_out_sparse_csr_cuda(const at::Tensor & self, const at::Tensor & A, bool upper, bool transpose, bool unitriangular, at::Tensor & X, at::Tensor & M);
} // namespace native
} // namespace at
