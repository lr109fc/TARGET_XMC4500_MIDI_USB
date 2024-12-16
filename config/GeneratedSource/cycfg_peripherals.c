/*******************************************************************************
 * File Name: cycfg_peripherals.c
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

#include "cycfg_peripherals.h"

const XMC_CCU4_SLICE_COMPARE_CONFIG_t emUSB_OS_Timer_compare_config =
{
    .timer_mode = XMC_CCU4_SLICE_TIMER_COUNT_MODE_EA,
    .monoshot = XMC_CCU4_SLICE_TIMER_REPEAT_MODE_REPEAT,
    .shadow_xfer_clear = false,
    .dither_timer_period = false,
    .dither_duty_cycle = false,
    .prescaler_mode = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
    .mcm_enable = false,
    .prescaler_initval = XMC_CCU4_SLICE_PRESCALER_4,
    .float_limit = XMC_CCU4_SLICE_PRESCALER_32768,
    .dither_limit = 0U,
    .passive_level = XMC_CCU4_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .timer_concatenation = false,
};
const XMC_ERU_ETL_CONFIG_t eru_0_etl_1_config =
{
    .input_b = ERU0_EXS1B,
    .enable_output_trigger = 1,
    .status_flag_mode = XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL,
    .source = XMC_ERU0_ETL1,
    .edge_detection = XMC_ERU_ETL_EDGE_DETECTION_DISABLED,
};
const XMC_ERU_ETL_CONFIG_t eru_0_etl_2_config =
{
    .input_b = ERU0_EXS2B,
    .enable_output_trigger = 1,
    .status_flag_mode = XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL,
    .source = XMC_ERU0_ETL2,
    .edge_detection = XMC_ERU_ETL_EDGE_DETECTION_DISABLED,
};
const XMC_ERU_ETL_CONFIG_t eru_0_etl_3_config =
{
    .input_b = ERU0_EXS3B,
    .enable_output_trigger = 1,
    .status_flag_mode = XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL,
    .source = XMC_ERU0_ETL3,
    .edge_detection = XMC_ERU_ETL_EDGE_DETECTION_DISABLED,
};
const XMC_RTC_CONFIG_t rtc_0_config =
{
    .time.seconds = 0U,
    .time.minutes = 0U,
    .time.hours = 10U,
    .time.days = 1U,
    .time.daysofweek = XMC_RTC_WEEKDAY_SUNDAY,
    .time.month = 1U,
    .time.year = 2025U,
    .alarm.seconds = 0U,
    .alarm.minutes = 0U,
    .alarm.hours = 0U,
    .alarm.days = 1U,
    .alarm.month = 1U,
    .alarm.year = 1970U,
    .prescaler = 0x7fffU,
};
const XMC_UART_CH_CONFIG_t CYBSP_DEBUG_UART_config =
{
    .baudrate = 115200UL,
    .normal_divider_mode = false,
    .data_bits = 8U,
    .frame_length = 8U,
    .stop_bits = 1U,
    .oversampling = 16U,
    .parity_mode = XMC_USIC_CH_PARITY_MODE_NONE,
};
const XMC_I2C_CH_CONFIG_t I2C_Display_config =
{
    .baudrate = 100000U,
    .normal_divider_mode = false,
    .address = I2C_Display_SLAVE_ADDRESS,
};
const XMC_UART_CH_CONFIG_t Midi_1_config =
{
    .baudrate = 31250UL,
    .normal_divider_mode = false,
    .data_bits = 8U,
    .frame_length = 8U,
    .stop_bits = 1U,
    .oversampling = 16U,
    .parity_mode = XMC_USIC_CH_PARITY_MODE_NONE,
};
const XMC_UART_CH_CONFIG_t Midi_2_config =
{
    .baudrate = 31250UL,
    .normal_divider_mode = false,
    .data_bits = 8U,
    .frame_length = 8U,
    .stop_bits = 1U,
    .oversampling = 16U,
    .parity_mode = XMC_USIC_CH_PARITY_MODE_NONE,
};
const XMC_UART_CH_CONFIG_t Midi_3_config =
{
    .baudrate = 31250UL,
    .normal_divider_mode = false,
    .data_bits = 8U,
    .frame_length = 8U,
    .stop_bits = 1U,
    .oversampling = 16U,
    .parity_mode = XMC_USIC_CH_PARITY_MODE_NONE,
};
const XMC_WDT_CONFIG_t wdt_0_config =
{
    .window_lower_bound = 0.00,
    .window_upper_bound = 0.00,
    .prewarn_mode = false,
    .service_pulse_width = 1U,
    .run_in_debug_mode = 0U,
};

void init_cycfg_peripherals(void)
{
    XMC_CCU4_Init(ccu4_0_HW, XMC_CCU4_SLICE_MCMS_ACTION_TRANSFER_PR_CR);
    XMC_CCU4_StartPrescaler(ccu4_0_HW);
    XMC_CCU4_SLICE_CompareInit(emUSB_OS_Timer_HW, &emUSB_OS_Timer_compare_config);
    XMC_CCU4_SLICE_SetTimerPeriodMatch(emUSB_OS_Timer_HW, 30000U);
    XMC_CCU4_EnableShadowTransfer(ccu4_0_HW,
        XMC_CCU4_SHADOW_TRANSFER_SLICE_0 |
		XMC_CCU4_SHADOW_TRANSFER_DITHER_SLICE_0 |
        XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 );
    XMC_CCU4_SLICE_SetInterruptNode(emUSB_OS_Timer_HW, XMC_CCU4_SLICE_IRQ_ID_PERIOD_MATCH, XMC_CCU4_SLICE_SR_ID_3);
    XMC_CCU4_SLICE_EnableEvent(emUSB_OS_Timer_HW, XMC_CCU4_SLICE_IRQ_ID_PERIOD_MATCH);
    XMC_CCU4_EnableClock(ccu4_0_HW, emUSB_OS_Timer_NUM);
    XMC_CCU4_SLICE_SetTimerValue(emUSB_OS_Timer_HW, 0U);
    XMC_ERU_ETL_Init(eru_0_etl_1_HW, &eru_0_etl_1_config);
    XMC_ERU_ETL_Init(eru_0_etl_2_HW, &eru_0_etl_2_config);
    XMC_ERU_ETL_Init(eru_0_etl_3_HW, &eru_0_etl_3_config);
    XMC_RTC_Init(&rtc_0_config);
    XMC_UART_CH_InitEx(CYBSP_DEBUG_UART_HW, &CYBSP_DEBUG_UART_config, false);
    XMC_UART_CH_SetInputSource(CYBSP_DEBUG_UART_HW, (XMC_UART_CH_INPUT_t)XMC_USIC_CH_INPUT_DX0, CYBSP_DEBUG_UART_DX0_INPUT);
    XMC_UART_CH_SetSamplePoint(CYBSP_DEBUG_UART_HW, 8U);
    XMC_USIC_CH_SetFractionalDivider(CYBSP_DEBUG_UART_HW, XMC_USIC_CH_BRG_CLOCK_DIVIDER_MODE_FRACTIONAL, 927U);
    XMC_USIC_CH_SetBaudrateDivider(CYBSP_DEBUG_UART_HW, XMC_USIC_CH_BRG_CLOCK_SOURCE_DIVIDER, false, 58U, XMC_USIC_CH_BRG_CTQSEL_PDIV, 0U, 15U);
    XMC_USIC_CH_SetInterruptNodePointer(CYBSP_DEBUG_UART_HW, XMC_USIC_CH_INTERRUPT_NODE_POINTER_RECEIVE, 0U);
    XMC_UART_CH_EnableEvent(CYBSP_DEBUG_UART_HW, XMC_UART_CH_EVENT_STANDARD_RECEIVE);
    XMC_UART_CH_Start(CYBSP_DEBUG_UART_HW);
    XMC_I2C_CH_InitEx(I2C_Display_HW, &I2C_Display_config, true);
    XMC_I2C_CH_SetInputSource(I2C_Display_HW, XMC_I2C_CH_INPUT_SDA, I2C_Display_DX0_INPUT);
    XMC_I2C_CH_SetInputSource(I2C_Display_HW, XMC_I2C_CH_INPUT_SCL, I2C_Display_DX1_INPUT);
    XMC_USIC_CH_SetFractionalDivider(I2C_Display_HW, XMC_USIC_CH_BRG_CLOCK_DIVIDER_MODE_FRACTIONAL, 1023U);
    XMC_USIC_CH_SetBaudrateDivider(I2C_Display_HW, XMC_USIC_CH_BRG_CLOCK_SOURCE_DIVIDER, false, 119U, XMC_USIC_CH_BRG_CTQSEL_PDIV, 0U, 9U);
    XMC_I2C_CH_Start(I2C_Display_HW);
    XMC_UART_CH_InitEx(Midi_1_HW, &Midi_1_config, false);
    XMC_UART_CH_SetInputSource(Midi_1_HW, (XMC_UART_CH_INPUT_t)XMC_USIC_CH_INPUT_DX0, Midi_1_DX0_INPUT);
    XMC_UART_CH_SetSamplePoint(Midi_1_HW, 8U);
    XMC_USIC_CH_SetFractionalDivider(Midi_1_HW, XMC_USIC_CH_BRG_CLOCK_DIVIDER_MODE_FRACTIONAL, 540U);
    XMC_USIC_CH_SetBaudrateDivider(Midi_1_HW, XMC_USIC_CH_BRG_CLOCK_SOURCE_DIVIDER, false, 126U, XMC_USIC_CH_BRG_CTQSEL_PDIV, 0U, 15U);
    XMC_UART_CH_Start(Midi_1_HW);
    XMC_UART_CH_InitEx(Midi_2_HW, &Midi_2_config, false);
    XMC_UART_CH_SetInputSource(Midi_2_HW, (XMC_UART_CH_INPUT_t)XMC_USIC_CH_INPUT_DX0, Midi_2_DX0_INPUT);
    XMC_UART_CH_SetSamplePoint(Midi_2_HW, 8U);
    XMC_USIC_CH_SetFractionalDivider(Midi_2_HW, XMC_USIC_CH_BRG_CLOCK_DIVIDER_MODE_FRACTIONAL, 540U);
    XMC_USIC_CH_SetBaudrateDivider(Midi_2_HW, XMC_USIC_CH_BRG_CLOCK_SOURCE_DIVIDER, false, 126U, XMC_USIC_CH_BRG_CTQSEL_PDIV, 0U, 15U);
    XMC_UART_CH_Start(Midi_2_HW);
    XMC_UART_CH_InitEx(Midi_3_HW, &Midi_3_config, false);
    XMC_UART_CH_SetInputSource(Midi_3_HW, (XMC_UART_CH_INPUT_t)XMC_USIC_CH_INPUT_DX0, Midi_3_DX0_INPUT);
    XMC_UART_CH_SetSamplePoint(Midi_3_HW, 8U);
    XMC_USIC_CH_SetFractionalDivider(Midi_3_HW, XMC_USIC_CH_BRG_CLOCK_DIVIDER_MODE_FRACTIONAL, 540U);
    XMC_USIC_CH_SetBaudrateDivider(Midi_3_HW, XMC_USIC_CH_BRG_CLOCK_SOURCE_DIVIDER, false, 126U, XMC_USIC_CH_BRG_CTQSEL_PDIV, 0U, 15U);
    XMC_UART_CH_Start(Midi_3_HW);
    XMC_WDT_Init(&wdt_0_config);
    XMC_WDT_Start();
}
