#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunctions_inl.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

#if defined(AT_PER_OPERATOR_HEADERS) && defined(TORCH_ASSERT_ONLY_METHOD_OPERATORS)
#error This change adds a dependency on all pytorch operators, meaning the     \
  file will need to be re-compiled every time an operator is changed or added. \
  Consider including a specific operator from                                  \
  <ATen/ops/{my_operator}_cuda_dispatch.h>.                   \
  See NOTE [TORCH_ASSERT_ONLY_METHOD_OPERATORS].
#endif

#include <ATen/ops/_adaptive_avg_pool2d_cuda_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool2d_backward_cuda_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool3d_cuda_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool3d_backward_cuda_dispatch.h>
#include <ATen/ops/_addmm_activation_cuda_dispatch.h>
#include <ATen/ops/_aminmax_cuda_dispatch.h>
#include <ATen/ops/_amp_foreach_non_finite_check_and_unscale_cuda_dispatch.h>
#include <ATen/ops/_amp_update_scale_cuda_dispatch.h>
#include <ATen/ops/_assert_async_cuda_dispatch.h>
#include <ATen/ops/_cdist_backward_cuda_dispatch.h>
#include <ATen/ops/_cdist_forward_cuda_dispatch.h>
#include <ATen/ops/_cholesky_solve_helper_cuda_dispatch.h>
#include <ATen/ops/_compute_linear_combination_cuda_dispatch.h>
#include <ATen/ops/_conv_depthwise2d_cuda_dispatch.h>
#include <ATen/ops/_convert_indices_from_coo_to_csr_cuda_dispatch.h>
#include <ATen/ops/_convert_indices_from_csr_to_coo_cuda_dispatch.h>
#include <ATen/ops/_cslt_compress_cuda_dispatch.h>
#include <ATen/ops/_cslt_sparse_mm_cuda_dispatch.h>
#include <ATen/ops/_ctc_loss_cuda_dispatch.h>
#include <ATen/ops/_ctc_loss_backward_cuda_dispatch.h>
#include <ATen/ops/_cudnn_ctc_loss_cuda_dispatch.h>
#include <ATen/ops/_cudnn_init_dropout_state_cuda_dispatch.h>
#include <ATen/ops/_cudnn_rnn_cuda_dispatch.h>
#include <ATen/ops/_cudnn_rnn_backward_cuda_dispatch.h>
#include <ATen/ops/_cudnn_rnn_flatten_weight_cuda_dispatch.h>
#include <ATen/ops/_cummax_helper_cuda_dispatch.h>
#include <ATen/ops/_cummin_helper_cuda_dispatch.h>
#include <ATen/ops/_dirichlet_grad_cuda_dispatch.h>
#include <ATen/ops/_efficient_attention_backward_cuda_dispatch.h>
#include <ATen/ops/_efficient_attention_forward_cuda_dispatch.h>
#include <ATen/ops/_efficientzerotensor_cuda_dispatch.h>
#include <ATen/ops/_embedding_bag_cuda_dispatch.h>
#include <ATen/ops/_embedding_bag_dense_backward_cuda_dispatch.h>
#include <ATen/ops/_embedding_bag_forward_only_cuda_dispatch.h>
#include <ATen/ops/_embedding_bag_per_sample_weights_backward_cuda_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_channel_affine_cuda_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_channel_affine_backward_cuda_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_tensor_affine_cuda_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_tensor_affine_backward_cuda_dispatch.h>
#include <ATen/ops/_fake_quantize_per_tensor_affine_cachemask_tensor_qparams_cuda_dispatch.h>
#include <ATen/ops/_fft_c2c_cuda_dispatch.h>
#include <ATen/ops/_fft_c2r_cuda_dispatch.h>
#include <ATen/ops/_fft_r2c_cuda_dispatch.h>
#include <ATen/ops/_fill_mem_eff_dropout_mask_cuda_dispatch.h>
#include <ATen/ops/_flash_attention_backward_cuda_dispatch.h>
#include <ATen/ops/_flash_attention_forward_cuda_dispatch.h>
#include <ATen/ops/_foreach_abs_cuda_dispatch.h>
#include <ATen/ops/_foreach_acos_cuda_dispatch.h>
#include <ATen/ops/_foreach_add_cuda_dispatch.h>
#include <ATen/ops/_foreach_addcdiv_cuda_dispatch.h>
#include <ATen/ops/_foreach_addcmul_cuda_dispatch.h>
#include <ATen/ops/_foreach_asin_cuda_dispatch.h>
#include <ATen/ops/_foreach_atan_cuda_dispatch.h>
#include <ATen/ops/_foreach_ceil_cuda_dispatch.h>
#include <ATen/ops/_foreach_clamp_max_cuda_dispatch.h>
#include <ATen/ops/_foreach_clamp_min_cuda_dispatch.h>
#include <ATen/ops/_foreach_copy_cuda_dispatch.h>
#include <ATen/ops/_foreach_cos_cuda_dispatch.h>
#include <ATen/ops/_foreach_cosh_cuda_dispatch.h>
#include <ATen/ops/_foreach_div_cuda_dispatch.h>
#include <ATen/ops/_foreach_erf_cuda_dispatch.h>
#include <ATen/ops/_foreach_erfc_cuda_dispatch.h>
#include <ATen/ops/_foreach_exp_cuda_dispatch.h>
#include <ATen/ops/_foreach_expm1_cuda_dispatch.h>
#include <ATen/ops/_foreach_floor_cuda_dispatch.h>
#include <ATen/ops/_foreach_frac_cuda_dispatch.h>
#include <ATen/ops/_foreach_lerp_cuda_dispatch.h>
#include <ATen/ops/_foreach_lgamma_cuda_dispatch.h>
#include <ATen/ops/_foreach_log_cuda_dispatch.h>
#include <ATen/ops/_foreach_log10_cuda_dispatch.h>
#include <ATen/ops/_foreach_log1p_cuda_dispatch.h>
#include <ATen/ops/_foreach_log2_cuda_dispatch.h>
#include <ATen/ops/_foreach_maximum_cuda_dispatch.h>
#include <ATen/ops/_foreach_minimum_cuda_dispatch.h>
#include <ATen/ops/_foreach_mul_cuda_dispatch.h>
#include <ATen/ops/_foreach_neg_cuda_dispatch.h>
#include <ATen/ops/_foreach_norm_cuda_dispatch.h>
#include <ATen/ops/_foreach_pow_cuda_dispatch.h>
#include <ATen/ops/_foreach_reciprocal_cuda_dispatch.h>
#include <ATen/ops/_foreach_round_cuda_dispatch.h>
#include <ATen/ops/_foreach_sigmoid_cuda_dispatch.h>
#include <ATen/ops/_foreach_sign_cuda_dispatch.h>
#include <ATen/ops/_foreach_sin_cuda_dispatch.h>
#include <ATen/ops/_foreach_sinh_cuda_dispatch.h>
#include <ATen/ops/_foreach_sqrt_cuda_dispatch.h>
#include <ATen/ops/_foreach_sub_cuda_dispatch.h>
#include <ATen/ops/_foreach_tan_cuda_dispatch.h>
#include <ATen/ops/_foreach_tanh_cuda_dispatch.h>
#include <ATen/ops/_foreach_trunc_cuda_dispatch.h>
#include <ATen/ops/_foreach_zero_cuda_dispatch.h>
#include <ATen/ops/_fused_adam_cuda_dispatch.h>
#include <ATen/ops/_fused_adamw_cuda_dispatch.h>
#include <ATen/ops/_fused_dropout_cuda_dispatch.h>
#include <ATen/ops/_fused_moving_avg_obs_fq_helper_cuda_dispatch.h>
#include <ATen/ops/_fused_sdp_choice_cuda_dispatch.h>
#include <ATen/ops/_index_put_impl_cuda_dispatch.h>
#include <ATen/ops/_int_mm_cuda_dispatch.h>
#include <ATen/ops/_linalg_det_cuda_dispatch.h>
#include <ATen/ops/_linalg_eigh_cuda_dispatch.h>
#include <ATen/ops/_linalg_slogdet_cuda_dispatch.h>
#include <ATen/ops/_linalg_solve_ex_cuda_dispatch.h>
#include <ATen/ops/_linalg_svd_cuda_dispatch.h>
#include <ATen/ops/_local_scalar_dense_cuda_dispatch.h>
#include <ATen/ops/_log_softmax_cuda_dispatch.h>
#include <ATen/ops/_log_softmax_backward_data_cuda_dispatch.h>
#include <ATen/ops/_logcumsumexp_cuda_dispatch.h>
#include <ATen/ops/_make_per_channel_quantized_tensor_cuda_dispatch.h>
#include <ATen/ops/_make_per_tensor_quantized_tensor_cuda_dispatch.h>
#include <ATen/ops/_masked_scale_cuda_dispatch.h>
#include <ATen/ops/_masked_softmax_cuda_dispatch.h>
#include <ATen/ops/_masked_softmax_backward_cuda_dispatch.h>
#include <ATen/ops/_native_batch_norm_legit_cuda_dispatch.h>
#include <ATen/ops/_native_multi_head_attention_cuda_dispatch.h>
#include <ATen/ops/_nested_from_padded_cuda_dispatch.h>
#include <ATen/ops/_nested_tensor_from_mask_cuda_dispatch.h>
#include <ATen/ops/_nested_tensor_from_mask_left_aligned_cuda_dispatch.h>
#include <ATen/ops/_nested_view_from_buffer_cuda_dispatch.h>
#include <ATen/ops/_pdist_backward_cuda_dispatch.h>
#include <ATen/ops/_pdist_forward_cuda_dispatch.h>
#include <ATen/ops/_pin_memory_cuda_dispatch.h>
#include <ATen/ops/_prelu_kernel_cuda_dispatch.h>
#include <ATen/ops/_prelu_kernel_backward_cuda_dispatch.h>
#include <ATen/ops/_reshape_alias_cuda_dispatch.h>
#include <ATen/ops/_sample_dirichlet_cuda_dispatch.h>
#include <ATen/ops/_scaled_dot_product_efficient_attention_cuda_dispatch.h>
#include <ATen/ops/_scaled_dot_product_efficient_attention_backward_cuda_dispatch.h>
#include <ATen/ops/_scaled_dot_product_flash_attention_cuda_dispatch.h>
#include <ATen/ops/_scaled_dot_product_flash_attention_backward_cuda_dispatch.h>
#include <ATen/ops/_scaled_mm_cuda_dispatch.h>
#include <ATen/ops/_segment_reduce_backward_cuda_dispatch.h>
#include <ATen/ops/_slow_conv2d_backward_cuda_dispatch.h>
#include <ATen/ops/_slow_conv2d_forward_cuda_dispatch.h>
#include <ATen/ops/_softmax_cuda_dispatch.h>
#include <ATen/ops/_softmax_backward_data_cuda_dispatch.h>
#include <ATen/ops/_sparse_semi_structured_linear_cuda_dispatch.h>
#include <ATen/ops/_standard_gamma_cuda_dispatch.h>
#include <ATen/ops/_standard_gamma_grad_cuda_dispatch.h>
#include <ATen/ops/_thnn_fused_gru_cell_cuda_dispatch.h>
#include <ATen/ops/_thnn_fused_gru_cell_backward_cuda_dispatch.h>
#include <ATen/ops/_thnn_fused_lstm_cell_cuda_dispatch.h>
#include <ATen/ops/_thnn_fused_lstm_cell_backward_impl_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_bsc_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_bsr_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_csc_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_csr_cuda_dispatch.h>
#include <ATen/ops/_to_sparse_semi_structured_cuda_dispatch.h>
#include <ATen/ops/_transform_bias_rescale_qkv_cuda_dispatch.h>
#include <ATen/ops/_transformer_encoder_layer_fwd_cuda_dispatch.h>
#include <ATen/ops/_triton_multi_head_attention_cuda_dispatch.h>
#include <ATen/ops/_triton_scaled_dot_attention_cuda_dispatch.h>
#include <ATen/ops/_unique_cuda_dispatch.h>
#include <ATen/ops/_unique2_cuda_dispatch.h>
#include <ATen/ops/_unsafe_index_cuda_dispatch.h>
#include <ATen/ops/_upsample_bicubic2d_aa_cuda_dispatch.h>
#include <ATen/ops/_upsample_bicubic2d_aa_backward_cuda_dispatch.h>
#include <ATen/ops/_upsample_bilinear2d_aa_cuda_dispatch.h>
#include <ATen/ops/_upsample_bilinear2d_aa_backward_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact1d_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact1d_backward_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact2d_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact2d_backward_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact3d_cuda_dispatch.h>
#include <ATen/ops/_upsample_nearest_exact3d_backward_cuda_dispatch.h>
#include <ATen/ops/_use_cudnn_ctc_loss_cuda_dispatch.h>
#include <ATen/ops/_validate_compressed_sparse_indices_cuda_dispatch.h>
#include <ATen/ops/_weight_norm_interface_cuda_dispatch.h>
#include <ATen/ops/_weight_norm_interface_backward_cuda_dispatch.h>
#include <ATen/ops/abs_cuda_dispatch.h>
#include <ATen/ops/acos_cuda_dispatch.h>
#include <ATen/ops/acosh_cuda_dispatch.h>
#include <ATen/ops/adaptive_avg_pool2d_cuda_dispatch.h>
#include <ATen/ops/adaptive_avg_pool3d_cuda_dispatch.h>
#include <ATen/ops/adaptive_avg_pool3d_backward_cuda_dispatch.h>
#include <ATen/ops/adaptive_max_pool2d_cuda_dispatch.h>
#include <ATen/ops/adaptive_max_pool2d_backward_cuda_dispatch.h>
#include <ATen/ops/adaptive_max_pool3d_cuda_dispatch.h>
#include <ATen/ops/adaptive_max_pool3d_backward_cuda_dispatch.h>
#include <ATen/ops/add_cuda_dispatch.h>
#include <ATen/ops/addbmm_cuda_dispatch.h>
#include <ATen/ops/addcdiv_cuda_dispatch.h>
#include <ATen/ops/addcmul_cuda_dispatch.h>
#include <ATen/ops/addmm_cuda_dispatch.h>
#include <ATen/ops/addmv_cuda_dispatch.h>
#include <ATen/ops/addr_cuda_dispatch.h>
#include <ATen/ops/all_cuda_dispatch.h>
#include <ATen/ops/amax_cuda_dispatch.h>
#include <ATen/ops/amin_cuda_dispatch.h>
#include <ATen/ops/aminmax_cuda_dispatch.h>
#include <ATen/ops/angle_cuda_dispatch.h>
#include <ATen/ops/any_cuda_dispatch.h>
#include <ATen/ops/arange_cuda_dispatch.h>
#include <ATen/ops/argmax_cuda_dispatch.h>
#include <ATen/ops/argmin_cuda_dispatch.h>
#include <ATen/ops/argsort_cuda_dispatch.h>
#include <ATen/ops/as_strided_cuda_dispatch.h>
#include <ATen/ops/asin_cuda_dispatch.h>
#include <ATen/ops/asinh_cuda_dispatch.h>
#include <ATen/ops/atan_cuda_dispatch.h>
#include <ATen/ops/atan2_cuda_dispatch.h>
#include <ATen/ops/atanh_cuda_dispatch.h>
#include <ATen/ops/avg_pool2d_cuda_dispatch.h>
#include <ATen/ops/avg_pool2d_backward_cuda_dispatch.h>
#include <ATen/ops/avg_pool3d_cuda_dispatch.h>
#include <ATen/ops/avg_pool3d_backward_cuda_dispatch.h>
#include <ATen/ops/baddbmm_cuda_dispatch.h>
#include <ATen/ops/batch_norm_backward_elemt_cuda_dispatch.h>
#include <ATen/ops/batch_norm_backward_reduce_cuda_dispatch.h>
#include <ATen/ops/batch_norm_elemt_cuda_dispatch.h>
#include <ATen/ops/batch_norm_gather_stats_cuda_dispatch.h>
#include <ATen/ops/batch_norm_gather_stats_with_counts_cuda_dispatch.h>
#include <ATen/ops/batch_norm_stats_cuda_dispatch.h>
#include <ATen/ops/batch_norm_update_stats_cuda_dispatch.h>
#include <ATen/ops/bernoulli_cuda_dispatch.h>
#include <ATen/ops/binary_cross_entropy_cuda_dispatch.h>
#include <ATen/ops/binary_cross_entropy_backward_cuda_dispatch.h>
#include <ATen/ops/bincount_cuda_dispatch.h>
#include <ATen/ops/binomial_cuda_dispatch.h>
#include <ATen/ops/bitwise_and_cuda_dispatch.h>
#include <ATen/ops/bitwise_left_shift_cuda_dispatch.h>
#include <ATen/ops/bitwise_not_cuda_dispatch.h>
#include <ATen/ops/bitwise_or_cuda_dispatch.h>
#include <ATen/ops/bitwise_right_shift_cuda_dispatch.h>
#include <ATen/ops/bitwise_xor_cuda_dispatch.h>
#include <ATen/ops/bmm_cuda_dispatch.h>
#include <ATen/ops/bucketize_cuda_dispatch.h>
#include <ATen/ops/cat_cuda_dispatch.h>
#include <ATen/ops/cauchy_cuda_dispatch.h>
#include <ATen/ops/ceil_cuda_dispatch.h>
#include <ATen/ops/channel_shuffle_cuda_dispatch.h>
#include <ATen/ops/cholesky_cuda_dispatch.h>
#include <ATen/ops/cholesky_inverse_cuda_dispatch.h>
#include <ATen/ops/clamp_cuda_dispatch.h>
#include <ATen/ops/clamp_max_cuda_dispatch.h>
#include <ATen/ops/clamp_min_cuda_dispatch.h>
#include <ATen/ops/col2im_cuda_dispatch.h>
#include <ATen/ops/complex_cuda_dispatch.h>
#include <ATen/ops/conj_physical_cuda_dispatch.h>
#include <ATen/ops/conv_depthwise3d_cuda_dispatch.h>
#include <ATen/ops/convolution_backward_cuda_dispatch.h>
#include <ATen/ops/copysign_cuda_dispatch.h>
#include <ATen/ops/cos_cuda_dispatch.h>
#include <ATen/ops/cosh_cuda_dispatch.h>
#include <ATen/ops/count_nonzero_cuda_dispatch.h>
#include <ATen/ops/cudnn_affine_grid_generator_cuda_dispatch.h>
#include <ATen/ops/cudnn_affine_grid_generator_backward_cuda_dispatch.h>
#include <ATen/ops/cudnn_batch_norm_cuda_dispatch.h>
#include <ATen/ops/cudnn_batch_norm_backward_cuda_dispatch.h>
#include <ATen/ops/cudnn_convolution_cuda_dispatch.h>
#include <ATen/ops/cudnn_convolution_add_relu_cuda_dispatch.h>
#include <ATen/ops/cudnn_convolution_relu_cuda_dispatch.h>
#include <ATen/ops/cudnn_convolution_transpose_cuda_dispatch.h>
#include <ATen/ops/cudnn_grid_sampler_cuda_dispatch.h>
#include <ATen/ops/cudnn_grid_sampler_backward_cuda_dispatch.h>
#include <ATen/ops/cumprod_cuda_dispatch.h>
#include <ATen/ops/cumsum_cuda_dispatch.h>
#include <ATen/ops/dense_dim_cuda_dispatch.h>
#include <ATen/ops/dequantize_cuda_dispatch.h>
#include <ATen/ops/digamma_cuda_dispatch.h>
#include <ATen/ops/div_cuda_dispatch.h>
#include <ATen/ops/dot_cuda_dispatch.h>
#include <ATen/ops/elu_cuda_dispatch.h>
#include <ATen/ops/elu_backward_cuda_dispatch.h>
#include <ATen/ops/embedding_dense_backward_cuda_dispatch.h>
#include <ATen/ops/embedding_renorm_cuda_dispatch.h>
#include <ATen/ops/empty_cuda_dispatch.h>
#include <ATen/ops/empty_strided_cuda_dispatch.h>
#include <ATen/ops/eq_cuda_dispatch.h>
#include <ATen/ops/equal_cuda_dispatch.h>
#include <ATen/ops/erf_cuda_dispatch.h>
#include <ATen/ops/erfc_cuda_dispatch.h>
#include <ATen/ops/erfinv_cuda_dispatch.h>
#include <ATen/ops/exp_cuda_dispatch.h>
#include <ATen/ops/exp2_cuda_dispatch.h>
#include <ATen/ops/expm1_cuda_dispatch.h>
#include <ATen/ops/exponential_cuda_dispatch.h>
#include <ATen/ops/eye_cuda_dispatch.h>
#include <ATen/ops/fake_quantize_per_channel_affine_cachemask_cuda_dispatch.h>
#include <ATen/ops/fake_quantize_per_tensor_affine_cachemask_cuda_dispatch.h>
#include <ATen/ops/fill_cuda_dispatch.h>
#include <ATen/ops/flip_cuda_dispatch.h>
#include <ATen/ops/floor_cuda_dispatch.h>
#include <ATen/ops/floor_divide_cuda_dispatch.h>
#include <ATen/ops/fmax_cuda_dispatch.h>
#include <ATen/ops/fmin_cuda_dispatch.h>
#include <ATen/ops/fmod_cuda_dispatch.h>
#include <ATen/ops/frac_cuda_dispatch.h>
#include <ATen/ops/fractional_max_pool2d_cuda_dispatch.h>
#include <ATen/ops/fractional_max_pool2d_backward_cuda_dispatch.h>
#include <ATen/ops/fractional_max_pool3d_cuda_dispatch.h>
#include <ATen/ops/fractional_max_pool3d_backward_cuda_dispatch.h>
#include <ATen/ops/frexp_cuda_dispatch.h>
#include <ATen/ops/gather_cuda_dispatch.h>
#include <ATen/ops/gcd_cuda_dispatch.h>
#include <ATen/ops/ge_cuda_dispatch.h>
#include <ATen/ops/gelu_cuda_dispatch.h>
#include <ATen/ops/gelu_backward_cuda_dispatch.h>
#include <ATen/ops/geometric_cuda_dispatch.h>
#include <ATen/ops/geqrf_cuda_dispatch.h>
#include <ATen/ops/glu_cuda_dispatch.h>
#include <ATen/ops/glu_backward_cuda_dispatch.h>
#include <ATen/ops/glu_backward_jvp_cuda_dispatch.h>
#include <ATen/ops/glu_jvp_cuda_dispatch.h>
#include <ATen/ops/grid_sampler_2d_cuda_dispatch.h>
#include <ATen/ops/grid_sampler_2d_backward_cuda_dispatch.h>
#include <ATen/ops/grid_sampler_3d_cuda_dispatch.h>
#include <ATen/ops/grid_sampler_3d_backward_cuda_dispatch.h>
#include <ATen/ops/gt_cuda_dispatch.h>
#include <ATen/ops/hardshrink_cuda_dispatch.h>
#include <ATen/ops/hardshrink_backward_cuda_dispatch.h>
#include <ATen/ops/hardsigmoid_cuda_dispatch.h>
#include <ATen/ops/hardsigmoid_backward_cuda_dispatch.h>
#include <ATen/ops/hardswish_cuda_dispatch.h>
#include <ATen/ops/hardswish_backward_cuda_dispatch.h>
#include <ATen/ops/hardtanh_cuda_dispatch.h>
#include <ATen/ops/hardtanh_backward_cuda_dispatch.h>
#include <ATen/ops/heaviside_cuda_dispatch.h>
#include <ATen/ops/histc_cuda_dispatch.h>
#include <ATen/ops/huber_loss_cuda_dispatch.h>
#include <ATen/ops/huber_loss_backward_cuda_dispatch.h>
#include <ATen/ops/hypot_cuda_dispatch.h>
#include <ATen/ops/i0_cuda_dispatch.h>
#include <ATen/ops/igamma_cuda_dispatch.h>
#include <ATen/ops/igammac_cuda_dispatch.h>
#include <ATen/ops/im2col_cuda_dispatch.h>
#include <ATen/ops/index_cuda_dispatch.h>
#include <ATen/ops/index_add_cuda_dispatch.h>
#include <ATen/ops/index_copy_cuda_dispatch.h>
#include <ATen/ops/index_fill_cuda_dispatch.h>
#include <ATen/ops/index_reduce_cuda_dispatch.h>
#include <ATen/ops/index_select_cuda_dispatch.h>
#include <ATen/ops/is_pinned_cuda_dispatch.h>
#include <ATen/ops/is_set_to_cuda_dispatch.h>
#include <ATen/ops/isin_cuda_dispatch.h>
#include <ATen/ops/isnan_cuda_dispatch.h>
#include <ATen/ops/isneginf_cuda_dispatch.h>
#include <ATen/ops/isposinf_cuda_dispatch.h>
#include <ATen/ops/kthvalue_cuda_dispatch.h>
#include <ATen/ops/lcm_cuda_dispatch.h>
#include <ATen/ops/le_cuda_dispatch.h>
#include <ATen/ops/leaky_relu_cuda_dispatch.h>
#include <ATen/ops/leaky_relu_backward_cuda_dispatch.h>
#include <ATen/ops/lerp_cuda_dispatch.h>
#include <ATen/ops/lgamma_cuda_dispatch.h>
#include <ATen/ops/linalg_cholesky_ex_cuda_dispatch.h>
#include <ATen/ops/linalg_cross_cuda_dispatch.h>
#include <ATen/ops/linalg_eig_cuda_dispatch.h>
#include <ATen/ops/linalg_householder_product_cuda_dispatch.h>
#include <ATen/ops/linalg_inv_ex_cuda_dispatch.h>
#include <ATen/ops/linalg_ldl_factor_ex_cuda_dispatch.h>
#include <ATen/ops/linalg_ldl_solve_cuda_dispatch.h>
#include <ATen/ops/linalg_lstsq_cuda_dispatch.h>
#include <ATen/ops/linalg_lu_cuda_dispatch.h>
#include <ATen/ops/linalg_lu_factor_ex_cuda_dispatch.h>
#include <ATen/ops/linalg_lu_solve_cuda_dispatch.h>
#include <ATen/ops/linalg_matrix_exp_cuda_dispatch.h>
#include <ATen/ops/linalg_qr_cuda_dispatch.h>
#include <ATen/ops/linalg_solve_triangular_cuda_dispatch.h>
#include <ATen/ops/linalg_vector_norm_cuda_dispatch.h>
#include <ATen/ops/linspace_cuda_dispatch.h>
#include <ATen/ops/log_cuda_dispatch.h>
#include <ATen/ops/log10_cuda_dispatch.h>
#include <ATen/ops/log1p_cuda_dispatch.h>
#include <ATen/ops/log2_cuda_dispatch.h>
#include <ATen/ops/log_normal_cuda_dispatch.h>
#include <ATen/ops/log_sigmoid_backward_cuda_dispatch.h>
#include <ATen/ops/log_sigmoid_forward_cuda_dispatch.h>
#include <ATen/ops/logaddexp_cuda_dispatch.h>
#include <ATen/ops/logaddexp2_cuda_dispatch.h>
#include <ATen/ops/logical_and_cuda_dispatch.h>
#include <ATen/ops/logical_not_cuda_dispatch.h>
#include <ATen/ops/logical_or_cuda_dispatch.h>
#include <ATen/ops/logical_xor_cuda_dispatch.h>
#include <ATen/ops/logit_cuda_dispatch.h>
#include <ATen/ops/logit_backward_cuda_dispatch.h>
#include <ATen/ops/logspace_cuda_dispatch.h>
#include <ATen/ops/lshift_cuda_dispatch.h>
#include <ATen/ops/lt_cuda_dispatch.h>
#include <ATen/ops/lu_unpack_cuda_dispatch.h>
#include <ATen/ops/masked_fill_cuda_dispatch.h>
#include <ATen/ops/masked_scatter_cuda_dispatch.h>
#include <ATen/ops/masked_select_cuda_dispatch.h>
#include <ATen/ops/max_cuda_dispatch.h>
#include <ATen/ops/max_pool2d_with_indices_cuda_dispatch.h>
#include <ATen/ops/max_pool2d_with_indices_backward_cuda_dispatch.h>
#include <ATen/ops/max_pool3d_with_indices_cuda_dispatch.h>
#include <ATen/ops/max_pool3d_with_indices_backward_cuda_dispatch.h>
#include <ATen/ops/max_unpool2d_cuda_dispatch.h>
#include <ATen/ops/max_unpool3d_cuda_dispatch.h>
#include <ATen/ops/maximum_cuda_dispatch.h>
#include <ATen/ops/mean_cuda_dispatch.h>
#include <ATen/ops/median_cuda_dispatch.h>
#include <ATen/ops/min_cuda_dispatch.h>
#include <ATen/ops/minimum_cuda_dispatch.h>
#include <ATen/ops/miopen_batch_norm_cuda_dispatch.h>
#include <ATen/ops/miopen_batch_norm_backward_cuda_dispatch.h>
#include <ATen/ops/miopen_convolution_cuda_dispatch.h>
#include <ATen/ops/miopen_convolution_add_relu_cuda_dispatch.h>
#include <ATen/ops/miopen_convolution_relu_cuda_dispatch.h>
#include <ATen/ops/miopen_convolution_transpose_cuda_dispatch.h>
#include <ATen/ops/miopen_depthwise_convolution_cuda_dispatch.h>
#include <ATen/ops/miopen_rnn_cuda_dispatch.h>
#include <ATen/ops/miopen_rnn_backward_cuda_dispatch.h>
#include <ATen/ops/mish_cuda_dispatch.h>
#include <ATen/ops/mish_backward_cuda_dispatch.h>
#include <ATen/ops/mm_cuda_dispatch.h>
#include <ATen/ops/mode_cuda_dispatch.h>
#include <ATen/ops/mse_loss_cuda_dispatch.h>
#include <ATen/ops/mse_loss_backward_cuda_dispatch.h>
#include <ATen/ops/mul_cuda_dispatch.h>
#include <ATen/ops/multi_margin_loss_cuda_dispatch.h>
#include <ATen/ops/multi_margin_loss_backward_cuda_dispatch.h>
#include <ATen/ops/multilabel_margin_loss_backward_cuda_dispatch.h>
#include <ATen/ops/multilabel_margin_loss_forward_cuda_dispatch.h>
#include <ATen/ops/multinomial_cuda_dispatch.h>
#include <ATen/ops/mvlgamma_cuda_dispatch.h>
#include <ATen/ops/nan_to_num_cuda_dispatch.h>
#include <ATen/ops/nanmedian_cuda_dispatch.h>
#include <ATen/ops/nansum_cuda_dispatch.h>
#include <ATen/ops/native_batch_norm_cuda_dispatch.h>
#include <ATen/ops/native_batch_norm_backward_cuda_dispatch.h>
#include <ATen/ops/native_dropout_cuda_dispatch.h>
#include <ATen/ops/native_dropout_backward_cuda_dispatch.h>
#include <ATen/ops/native_group_norm_cuda_dispatch.h>
#include <ATen/ops/native_group_norm_backward_cuda_dispatch.h>
#include <ATen/ops/native_layer_norm_cuda_dispatch.h>
#include <ATen/ops/native_layer_norm_backward_cuda_dispatch.h>
#include <ATen/ops/ne_cuda_dispatch.h>
#include <ATen/ops/neg_cuda_dispatch.h>
#include <ATen/ops/nextafter_cuda_dispatch.h>
#include <ATen/ops/nll_loss2d_backward_cuda_dispatch.h>
#include <ATen/ops/nll_loss2d_forward_cuda_dispatch.h>
#include <ATen/ops/nll_loss_backward_cuda_dispatch.h>
#include <ATen/ops/nll_loss_forward_cuda_dispatch.h>
#include <ATen/ops/nonzero_cuda_dispatch.h>
#include <ATen/ops/norm_cuda_dispatch.h>
#include <ATen/ops/normal_cuda_dispatch.h>
#include <ATen/ops/ormqr_cuda_dispatch.h>
#include <ATen/ops/poisson_cuda_dispatch.h>
#include <ATen/ops/polar_cuda_dispatch.h>
#include <ATen/ops/polygamma_cuda_dispatch.h>
#include <ATen/ops/pow_cuda_dispatch.h>
#include <ATen/ops/prod_cuda_dispatch.h>
#include <ATen/ops/put_cuda_dispatch.h>
#include <ATen/ops/quantize_per_channel_cuda_dispatch.h>
#include <ATen/ops/quantize_per_tensor_cuda_dispatch.h>
#include <ATen/ops/quantize_per_tensor_dynamic_cuda_dispatch.h>
#include <ATen/ops/random_cuda_dispatch.h>
#include <ATen/ops/randperm_cuda_dispatch.h>
#include <ATen/ops/range_cuda_dispatch.h>
#include <ATen/ops/reciprocal_cuda_dispatch.h>
#include <ATen/ops/record_stream_cuda_dispatch.h>
#include <ATen/ops/reflection_pad1d_cuda_dispatch.h>
#include <ATen/ops/reflection_pad1d_backward_cuda_dispatch.h>
#include <ATen/ops/reflection_pad2d_cuda_dispatch.h>
#include <ATen/ops/reflection_pad2d_backward_cuda_dispatch.h>
#include <ATen/ops/reflection_pad3d_cuda_dispatch.h>
#include <ATen/ops/reflection_pad3d_backward_cuda_dispatch.h>
#include <ATen/ops/relu_cuda_dispatch.h>
#include <ATen/ops/remainder_cuda_dispatch.h>
#include <ATen/ops/renorm_cuda_dispatch.h>
#include <ATen/ops/repeat_interleave_cuda_dispatch.h>
#include <ATen/ops/replication_pad1d_cuda_dispatch.h>
#include <ATen/ops/replication_pad1d_backward_cuda_dispatch.h>
#include <ATen/ops/replication_pad2d_cuda_dispatch.h>
#include <ATen/ops/replication_pad2d_backward_cuda_dispatch.h>
#include <ATen/ops/replication_pad3d_cuda_dispatch.h>
#include <ATen/ops/replication_pad3d_backward_cuda_dispatch.h>
#include <ATen/ops/resize_cuda_dispatch.h>
#include <ATen/ops/roll_cuda_dispatch.h>
#include <ATen/ops/round_cuda_dispatch.h>
#include <ATen/ops/rrelu_with_noise_cuda_dispatch.h>
#include <ATen/ops/rshift_cuda_dispatch.h>
#include <ATen/ops/rsqrt_cuda_dispatch.h>
#include <ATen/ops/rsub_cuda_dispatch.h>
#include <ATen/ops/scatter_cuda_dispatch.h>
#include <ATen/ops/scatter_add_cuda_dispatch.h>
#include <ATen/ops/scatter_reduce_cuda_dispatch.h>
#include <ATen/ops/searchsorted_cuda_dispatch.h>
#include <ATen/ops/segment_reduce_cuda_dispatch.h>
#include <ATen/ops/set_cuda_dispatch.h>
#include <ATen/ops/sgn_cuda_dispatch.h>
#include <ATen/ops/sigmoid_cuda_dispatch.h>
#include <ATen/ops/sigmoid_backward_cuda_dispatch.h>
#include <ATen/ops/sign_cuda_dispatch.h>
#include <ATen/ops/signbit_cuda_dispatch.h>
#include <ATen/ops/silu_cuda_dispatch.h>
#include <ATen/ops/silu_backward_cuda_dispatch.h>
#include <ATen/ops/sin_cuda_dispatch.h>
#include <ATen/ops/sinc_cuda_dispatch.h>
#include <ATen/ops/sinh_cuda_dispatch.h>
#include <ATen/ops/slow_conv_dilated2d_cuda_dispatch.h>
#include <ATen/ops/slow_conv_dilated3d_cuda_dispatch.h>
#include <ATen/ops/slow_conv_transpose2d_cuda_dispatch.h>
#include <ATen/ops/slow_conv_transpose3d_cuda_dispatch.h>
#include <ATen/ops/smooth_l1_loss_cuda_dispatch.h>
#include <ATen/ops/smooth_l1_loss_backward_cuda_dispatch.h>
#include <ATen/ops/softplus_cuda_dispatch.h>
#include <ATen/ops/softplus_backward_cuda_dispatch.h>
#include <ATen/ops/softshrink_cuda_dispatch.h>
#include <ATen/ops/softshrink_backward_cuda_dispatch.h>
#include <ATen/ops/sort_cuda_dispatch.h>
#include <ATen/ops/sparse_dim_cuda_dispatch.h>
#include <ATen/ops/special_airy_ai_cuda_dispatch.h>
#include <ATen/ops/special_bessel_j0_cuda_dispatch.h>
#include <ATen/ops/special_bessel_j1_cuda_dispatch.h>
#include <ATen/ops/special_bessel_y0_cuda_dispatch.h>
#include <ATen/ops/special_bessel_y1_cuda_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_t_cuda_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_u_cuda_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_v_cuda_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_w_cuda_dispatch.h>
#include <ATen/ops/special_entr_cuda_dispatch.h>
#include <ATen/ops/special_erfcx_cuda_dispatch.h>
#include <ATen/ops/special_hermite_polynomial_h_cuda_dispatch.h>
#include <ATen/ops/special_hermite_polynomial_he_cuda_dispatch.h>
#include <ATen/ops/special_i0e_cuda_dispatch.h>
#include <ATen/ops/special_i1_cuda_dispatch.h>
#include <ATen/ops/special_i1e_cuda_dispatch.h>
#include <ATen/ops/special_laguerre_polynomial_l_cuda_dispatch.h>
#include <ATen/ops/special_legendre_polynomial_p_cuda_dispatch.h>
#include <ATen/ops/special_log_ndtr_cuda_dispatch.h>
#include <ATen/ops/special_modified_bessel_i0_cuda_dispatch.h>
#include <ATen/ops/special_modified_bessel_i1_cuda_dispatch.h>
#include <ATen/ops/special_modified_bessel_k0_cuda_dispatch.h>
#include <ATen/ops/special_modified_bessel_k1_cuda_dispatch.h>
#include <ATen/ops/special_ndtri_cuda_dispatch.h>
#include <ATen/ops/special_scaled_modified_bessel_k0_cuda_dispatch.h>
#include <ATen/ops/special_scaled_modified_bessel_k1_cuda_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_t_cuda_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_u_cuda_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_v_cuda_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_w_cuda_dispatch.h>
#include <ATen/ops/special_spherical_bessel_j0_cuda_dispatch.h>
#include <ATen/ops/special_xlog1py_cuda_dispatch.h>
#include <ATen/ops/special_zeta_cuda_dispatch.h>
#include <ATen/ops/sqrt_cuda_dispatch.h>
#include <ATen/ops/sspaddmm_cuda_dispatch.h>
#include <ATen/ops/std_cuda_dispatch.h>
#include <ATen/ops/std_mean_cuda_dispatch.h>
#include <ATen/ops/sub_cuda_dispatch.h>
#include <ATen/ops/sum_cuda_dispatch.h>
#include <ATen/ops/take_cuda_dispatch.h>
#include <ATen/ops/tan_cuda_dispatch.h>
#include <ATen/ops/tanh_cuda_dispatch.h>
#include <ATen/ops/tanh_backward_cuda_dispatch.h>
#include <ATen/ops/threshold_cuda_dispatch.h>
#include <ATen/ops/threshold_backward_cuda_dispatch.h>
#include <ATen/ops/topk_cuda_dispatch.h>
#include <ATen/ops/trace_cuda_dispatch.h>
#include <ATen/ops/triangular_solve_cuda_dispatch.h>
#include <ATen/ops/tril_cuda_dispatch.h>
#include <ATen/ops/tril_indices_cuda_dispatch.h>
#include <ATen/ops/triu_cuda_dispatch.h>
#include <ATen/ops/triu_indices_cuda_dispatch.h>
#include <ATen/ops/trunc_cuda_dispatch.h>
#include <ATen/ops/unfold_cuda_dispatch.h>
#include <ATen/ops/unfold_backward_cuda_dispatch.h>
#include <ATen/ops/uniform_cuda_dispatch.h>
#include <ATen/ops/unique_consecutive_cuda_dispatch.h>
#include <ATen/ops/unique_dim_cuda_dispatch.h>
#include <ATen/ops/unique_dim_consecutive_cuda_dispatch.h>
#include <ATen/ops/upsample_bicubic2d_cuda_dispatch.h>
#include <ATen/ops/upsample_bicubic2d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_bilinear2d_cuda_dispatch.h>
#include <ATen/ops/upsample_bilinear2d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_linear1d_cuda_dispatch.h>
#include <ATen/ops/upsample_linear1d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest1d_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest1d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest2d_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest2d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest3d_cuda_dispatch.h>
#include <ATen/ops/upsample_nearest3d_backward_cuda_dispatch.h>
#include <ATen/ops/upsample_trilinear3d_cuda_dispatch.h>
#include <ATen/ops/upsample_trilinear3d_backward_cuda_dispatch.h>
#include <ATen/ops/var_cuda_dispatch.h>
#include <ATen/ops/var_mean_cuda_dispatch.h>
#include <ATen/ops/vdot_cuda_dispatch.h>
#include <ATen/ops/view_cuda_dispatch.h>
#include <ATen/ops/view_as_complex_cuda_dispatch.h>
#include <ATen/ops/view_as_real_cuda_dispatch.h>
#include <ATen/ops/where_cuda_dispatch.h>
#include <ATen/ops/xlogy_cuda_dispatch.h>
#include <ATen/ops/zero_cuda_dispatch.h>



