/**
  ******************************************************************************
  * @file    network_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-10-30T21:33:53+0000
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_DATA_H
#define NETWORK_DATA_H

#include "network_config.h"
#include "network_data_params.h"

AI_DEPRECATED
#define AI_NETWORK_DATA_ACTIVATIONS(ptr_)  \
  ai_network_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_NETWORK_DATA_WEIGHTS(ptr_)  \
  ai_network_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_network_conv2d_6_conv2d_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_6_conv2d_bias_array_u64[16];
extern const ai_u64 s_network_conv2d_7_conv2d_weights_array_u64[4608];
extern const ai_u64 s_network_conv2d_7_conv2d_bias_array_u64[16];
extern const ai_u64 s_network_dense_6_dense_weights_array_u64[401408];
extern const ai_u64 s_network_dense_6_dense_bias_array_u64[64];
extern const ai_u64 s_network_dense_7_dense_weights_array_u64[64];
extern const ai_u64 s_network_dense_7_dense_bias_array_u64[1];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* NETWORK_DATA_H */
