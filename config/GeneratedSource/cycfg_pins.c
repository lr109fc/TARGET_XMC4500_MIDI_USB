/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
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

#include "cycfg_pins.h"

const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_0_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_0_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_11_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_11_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_1_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_1_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t PIN_INTERRUPT_RotaryEncoder_1_config =
{
    .mode = (XMC_GPIO_MODE_t)PIN_INTERRUPT_RotaryEncoder_1_MODE,
};
const XMC_GPIO_CONFIG_t RotaryPin2_config =
{
    .mode = (XMC_GPIO_MODE_t)RotaryPin2_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t PIN_INTERRUPT_RotaryEncoder_Bt_config =
{
    .mode = (XMC_GPIO_MODE_t)PIN_INTERRUPT_RotaryEncoder_Bt_MODE,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_5_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_5_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t Button_1_config =
{
    .mode = (XMC_GPIO_MODE_t)Button_1_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t Button_2_config =
{
    .mode = (XMC_GPIO_MODE_t)Button_2_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t PIN_INTERRUPT_Button_3_config =
{
    .mode = (XMC_GPIO_MODE_t)PIN_INTERRUPT_Button_3_MODE,
};
const XMC_GPIO_CONFIG_t LED_2_config =
{
    .mode = (XMC_GPIO_MODE_t)LED_2_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
    .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM,
};
const XMC_GPIO_CONFIG_t BUTTON_1_config =
{
    .mode = (XMC_GPIO_MODE_t)BUTTON_1_MODE,
};
const XMC_GPIO_CONFIG_t BUTTON_2_config =
{
    .mode = (XMC_GPIO_MODE_t)BUTTON_2_MODE,
};
const XMC_GPIO_CONFIG_t LED_1_config =
{
    .mode = (XMC_GPIO_MODE_t)LED_1_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
    .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM,
};
const XMC_GPIO_CONFIG_t QSPI_D1_config =
{
    .mode = (XMC_GPIO_MODE_t)QSPI_D1_MODE,
};
const XMC_GPIO_CONFIG_t QSPI_D0_config =
{
    .mode = (XMC_GPIO_MODE_t)QSPI_D0_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_3_pin_4_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_3_pin_4_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_3_pin_5_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_3_pin_5_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_5_pin_0_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_5_pin_0_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_5_pin_1_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_5_pin_1_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};

void init_cycfg_pins(void)
{
    XMC_GPIO_Init(ioss_0_port_0_pin_0_PORT, ioss_0_port_0_pin_0_PIN, &ioss_0_port_0_pin_0_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_0_PORT, ioss_0_port_0_pin_0_PIN, ioss_0_port_0_pin_0_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_11_PORT, ioss_0_port_0_pin_11_PIN, &ioss_0_port_0_pin_11_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_11_PORT, ioss_0_port_0_pin_11_PIN, ioss_0_port_0_pin_11_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_1_PORT, ioss_0_port_0_pin_1_PIN, &ioss_0_port_0_pin_1_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_1_PORT, ioss_0_port_0_pin_1_PIN, ioss_0_port_0_pin_1_HWO);
    XMC_GPIO_Init(PIN_INTERRUPT_RotaryEncoder_1_PORT, PIN_INTERRUPT_RotaryEncoder_1_PIN, &PIN_INTERRUPT_RotaryEncoder_1_config);
    XMC_GPIO_SetHardwareControl(PIN_INTERRUPT_RotaryEncoder_1_PORT, PIN_INTERRUPT_RotaryEncoder_1_PIN, PIN_INTERRUPT_RotaryEncoder_1_HWO);
    XMC_GPIO_Init(RotaryPin2_PORT, RotaryPin2_PIN, &RotaryPin2_config);
    XMC_GPIO_SetHardwareControl(RotaryPin2_PORT, RotaryPin2_PIN, RotaryPin2_HWO);
    XMC_GPIO_Init(PIN_INTERRUPT_RotaryEncoder_Bt_PORT, PIN_INTERRUPT_RotaryEncoder_Bt_PIN, &PIN_INTERRUPT_RotaryEncoder_Bt_config);
    XMC_GPIO_SetHardwareControl(PIN_INTERRUPT_RotaryEncoder_Bt_PORT, PIN_INTERRUPT_RotaryEncoder_Bt_PIN, PIN_INTERRUPT_RotaryEncoder_Bt_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_5_PORT, ioss_0_port_0_pin_5_PIN, &ioss_0_port_0_pin_5_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_5_PORT, ioss_0_port_0_pin_5_PIN, ioss_0_port_0_pin_5_HWO);
    XMC_GPIO_Init(Button_1_PORT, Button_1_PIN, &Button_1_config);
    XMC_GPIO_SetHardwareControl(Button_1_PORT, Button_1_PIN, Button_1_HWO);
    XMC_GPIO_Init(Button_2_PORT, Button_2_PIN, &Button_2_config);
    XMC_GPIO_SetHardwareControl(Button_2_PORT, Button_2_PIN, Button_2_HWO);
    XMC_GPIO_Init(PIN_INTERRUPT_Button_3_PORT, PIN_INTERRUPT_Button_3_PIN, &PIN_INTERRUPT_Button_3_config);
    XMC_GPIO_SetHardwareControl(PIN_INTERRUPT_Button_3_PORT, PIN_INTERRUPT_Button_3_PIN, PIN_INTERRUPT_Button_3_HWO);
    XMC_GPIO_Init(LED_2_PORT, LED_2_PIN, &LED_2_config);
    XMC_GPIO_SetHardwareControl(LED_2_PORT, LED_2_PIN, LED_2_HWO);
    XMC_GPIO_Init(BUTTON_1_PORT, BUTTON_1_PIN, &BUTTON_1_config);
    XMC_GPIO_SetHardwareControl(BUTTON_1_PORT, BUTTON_1_PIN, BUTTON_1_HWO);
    XMC_GPIO_Init(BUTTON_2_PORT, BUTTON_2_PIN, &BUTTON_2_config);
    XMC_GPIO_SetHardwareControl(BUTTON_2_PORT, BUTTON_2_PIN, BUTTON_2_HWO);
    XMC_GPIO_Init(LED_1_PORT, LED_1_PIN, &LED_1_config);
    XMC_GPIO_SetHardwareControl(LED_1_PORT, LED_1_PIN, LED_1_HWO);
    XMC_GPIO_Init(QSPI_D1_PORT, QSPI_D1_PIN, &QSPI_D1_config);
    XMC_GPIO_SetHardwareControl(QSPI_D1_PORT, QSPI_D1_PIN, QSPI_D1_HWO);
    XMC_GPIO_Init(QSPI_D0_PORT, QSPI_D0_PIN, &QSPI_D0_config);
    XMC_GPIO_SetHardwareControl(QSPI_D0_PORT, QSPI_D0_PIN, QSPI_D0_HWO);
    XMC_GPIO_Init(ioss_0_port_3_pin_4_PORT, ioss_0_port_3_pin_4_PIN, &ioss_0_port_3_pin_4_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_3_pin_4_PORT, ioss_0_port_3_pin_4_PIN, ioss_0_port_3_pin_4_HWO);
    XMC_GPIO_Init(ioss_0_port_3_pin_5_PORT, ioss_0_port_3_pin_5_PIN, &ioss_0_port_3_pin_5_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_3_pin_5_PORT, ioss_0_port_3_pin_5_PIN, ioss_0_port_3_pin_5_HWO);
    XMC_GPIO_Init(ioss_0_port_5_pin_0_PORT, ioss_0_port_5_pin_0_PIN, &ioss_0_port_5_pin_0_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_5_pin_0_PORT, ioss_0_port_5_pin_0_PIN, ioss_0_port_5_pin_0_HWO);
    XMC_GPIO_Init(ioss_0_port_5_pin_1_PORT, ioss_0_port_5_pin_1_PIN, &ioss_0_port_5_pin_1_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_5_pin_1_PORT, ioss_0_port_5_pin_1_PIN, ioss_0_port_5_pin_1_HWO);
}
