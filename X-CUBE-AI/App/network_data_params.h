/**
  ******************************************************************************
  * @file    network_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-12-02T18:20:50+0100
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

#ifndef NETWORK_DATA_PARAMS_H
#define NETWORK_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_NETWORK_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_data_weights_params[1]))
*/

#define AI_NETWORK_DATA_CONFIG               (NULL)


#define AI_NETWORK_DATA_ACTIVATIONS_SIZES \
  { 149484, }
#define AI_NETWORK_DATA_ACTIVATIONS_SIZE     (149484)
#define AI_NETWORK_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_DATA_ACTIVATION_1_SIZE    (149484)



#define AI_NETWORK_DATA_WEIGHTS_SIZES \
  { 3456, 128, 36864, 128, 3211264, 512, 512, 4, }
#define AI_NETWORK_DATA_WEIGHTS_SIZE         (3252868)
#define AI_NETWORK_DATA_WEIGHTS_COUNT        (8)
#define AI_NETWORK_DATA_WEIGHT_1_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_2_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_3_SIZE        (36864)
#define AI_NETWORK_DATA_WEIGHT_4_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_5_SIZE        (3211264)
#define AI_NETWORK_DATA_WEIGHT_6_SIZE        (512)
#define AI_NETWORK_DATA_WEIGHT_7_SIZE        (512)
#define AI_NETWORK_DATA_WEIGHT_8_SIZE        (4)



#define AI_NETWORK_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_activations_table[1])

extern ai_handle g_network_activations_table[1 + 2];



#define AI_NETWORK_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_weights_table[1])

extern ai_handle g_network_weights_table[8 + 2];


#endif    /* NETWORK_DATA_PARAMS_H */
