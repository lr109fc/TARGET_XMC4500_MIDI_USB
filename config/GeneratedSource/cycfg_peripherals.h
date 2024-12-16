/*******************************************************************************
 * File Name: cycfg_peripherals.h
 *
 * Description:
 * Peripheral Hardware Block configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.30.0
 * device-db 4.19.0.7298
 * mtb-xmclib-cat3 4.4.0.4715
 *
 *******************************************************************************
 * Copyright 2024 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "xmc_ccu4.h"
#include "xmc_eru.h"
#include "cycfg_routing.h"
#include "xmc_rtc.h"
#include "xmc4_rtc.h"
#include "xmc_uart.h"
#include "xmc_i2c.h"
#include "xmc_wdt.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ccu4_0_ENABLED 1U
#define ccu4_0_NUM 0U
#define ccu4_0_HW CCU40
#define emUSB_OS_Timer_ENABLED 1U
#define emUSB_OS_Timer_NUM 0U
#define emUSB_OS_Timer_HW CCU40_CC40
#define emUSB_OS_Timer_INTERRUPT_HANDLER CCU40_3_IRQHandler
#define emUSB_OS_Timer_IRQN CCU40_3_IRQn
#define emUSB_OS_Timer_EVENT XMC_CCU4_SLICE_IRQ_ID_PERIOD_MATCH
#define emUSB_OS_Timer_INTERRUPT_PRIORITY 63U
#define eru_0_ers_1_ENABLED 1U
#define XMC_ERU0_ETL1 XMC_ERU_ETL_SOURCE_B
#define eru_0_ers_2_ENABLED 1U
#define XMC_ERU0_ETL2 XMC_ERU_ETL_SOURCE_B
#define eru_0_ers_3_ENABLED 1U
#define XMC_ERU0_ETL3 XMC_ERU_ETL_SOURCE_B
#define eru_0_etl_1_ENABLED 1U
#define eru_0_etl_1_NUM 1U
#define eru_0_etl_1_HW ERU0_ETL1
#define eru_0_etl_2_ENABLED 1U
#define eru_0_etl_2_NUM 2U
#define eru_0_etl_2_HW ERU0_ETL2
#define eru_0_etl_3_ENABLED 1U
#define eru_0_etl_3_NUM 3U
#define eru_0_etl_3_HW ERU0_ETL3
#define rtc_0_ENABLED 1U
#define USB_Midi_ENABLED 1U
#define CYBSP_DEBUG_UART_ENABLED 1U
#define CYBSP_DEBUG_UART_NUM 0U
#define CYBSP_DEBUG_UART_HW XMC_UART0_CH0
#define CYBSP_DEBUG_UART_DX0_INPUT USIC0_CH0_DX0CR_DSEL_VALUE
#define CYBSP_DEBUG_UART_RECEIVE_EVENT_HANDLER USIC0_0_IRQHandler
#define CYBSP_DEBUG_UART_RECEIVE_EVENT_IRQN USIC0_0_IRQn
#define I2C_Display_ENABLED 1U
#define I2C_Display_NUM 0U
#define I2C_Display_HW XMC_I2C1_CH0
#define I2C_Display_DX0_INPUT USIC1_CH0_DX0CR_DSEL_VALUE
#define I2C_Display_DX1_INPUT USIC1_CH0_DX1CR_DSEL_VALUE
#define I2C_Display_SLAVE_ADDRESS 0U
#define Midi_1_ENABLED 1U
#define Midi_1_NUM 1U
#define Midi_1_HW XMC_UART1_CH1
#define Midi_1_DX0_INPUT USIC1_CH1_DX0CR_DSEL_VALUE
#define Midi_2_ENABLED 1U
#define Midi_2_NUM 0U
#define Midi_2_HW XMC_UART2_CH0
#define Midi_2_DX0_INPUT USIC2_CH0_DX0CR_DSEL_VALUE
#define Midi_3_ENABLED 1U
#define Midi_3_NUM 1U
#define Midi_3_HW XMC_UART2_CH1
#define Midi_3_DX0_INPUT USIC2_CH1_DX0CR_DSEL_VALUE
#define wdt_0_ENABLED 1U
#define WATCHDOG_EVENT_VIA_SCU 0U
#define WATCHDOG_EVENT_VIA_NMI 0U
#define WATCHDOG_PREWARNING_CHECK 0U

extern const XMC_CCU4_SLICE_COMPARE_CONFIG_t emUSB_OS_Timer_compare_config;
extern const XMC_ERU_ETL_CONFIG_t eru_0_etl_1_config;
extern const XMC_ERU_ETL_CONFIG_t eru_0_etl_2_config;
extern const XMC_ERU_ETL_CONFIG_t eru_0_etl_3_config;
extern const XMC_RTC_CONFIG_t rtc_0_config;
extern const XMC_UART_CH_CONFIG_t CYBSP_DEBUG_UART_config;
extern const XMC_I2C_CH_CONFIG_t I2C_Display_config;
extern const XMC_UART_CH_CONFIG_t Midi_1_config;
extern const XMC_UART_CH_CONFIG_t Midi_2_config;
extern const XMC_UART_CH_CONFIG_t Midi_3_config;
extern const XMC_WDT_CONFIG_t wdt_0_config;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
