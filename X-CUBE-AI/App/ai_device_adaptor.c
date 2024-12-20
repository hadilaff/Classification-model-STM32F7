/**
 ******************************************************************************
 * @file    ai_device_adaptor.c
 * @author  MCD/AIS Team
 * @brief   Specific DEVICE port functions for AI test application
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software is licensed under terms that can be found in the LICENSE file in
 * the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "ai_device_adaptor.h"
 
#ifdef __cplusplus
extern "C" {
#endif


#if defined(SR5E1)

/* --------------------------------------------
 * STELLAR-E series
 * --------------------------------------------
 */

#if defined(_IS_GCC_COMPILER) && _IS_GCC_COMPILER
extern uint32_t __process_stack_end__;
uint32_t *_estack = &__process_stack_end__;
#endif

#endif /* SR5E1 */

#if defined(STM32N657xx) || defined(STM32N6)

/* --------------------------------------------
 * STM32N6xx series
 * --------------------------------------------
 */

#if defined(HAS_EXTRA_CONF) && HAS_EXTRA_CONF >= 4

extern uint32_t npur_freq_mhz;         /* NIC freq */
extern uint32_t npu_freq_mhz;          /* NPU freq */
extern uint32_t sysb_freq_mhz;         /* NOC freq */
extern uint32_t mcu_freq_mhz;          /* MCU freq */

void port_hal_set_extra_conf(uint32_t *extra)
{
  /* Add specific infos in relation to the ATONss
   * Note: NOC freq is returned by port_hal_get_sys_freq()
   */
  extra[0] = 0;                  /* extra config
                                        b7..0  : type/format    00h : N6/ATONss
                                        b8..31 : TBD
                                  */
  extra[1] = (npu_freq_mhz *1000*1000);   /* NPU freq. */
  extra[2] = (npur_freq_mhz*1000*1000);    /* NIC freq, AXIMRAM3,4,5,6, NPUCACHE */
  extra[3] = 0;
}
#endif

#endif /* STM32N657xx, STM32N6 */


#if !defined(NO_PORT_DWT_INIT_IMP)

#if defined(HAS_PMU_CTRL) && defined(HAS_DWT_CTRL) && HAS_PMU_CTRL == 1 && HAS_DWT_CTRL == 1
#error Only HAS_PMU_CTRL or HAS_DWT_CTRL should be defined.
#endif

#if defined(HAS_PMU_CTRL) && HAS_PMU_CTRL == 1

void port_dwt_init_imp()
{
  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
  ARM_PMU_Enable();
  ARM_PMU_CNTR_Enable(PMU_CNTENSET_CCNTR_ENABLE_Msk);
}

#endif  /* HAS_PMU_CTRL */

#if defined(HAS_DWT_CTRL) && HAS_DWT_CTRL == 1

void port_dwt_init_imp()
{
  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
#ifdef STM32F7
  DWT->LAR = 0xC5ACCE55;
#endif
  DWT->CYCCNT = 0;
  DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
}

#endif /* HAS_DWT_CTRL */

#endif /* !NO_PORT_DWT_INIT_IMP */

#ifdef __cplusplus
}
#endif
