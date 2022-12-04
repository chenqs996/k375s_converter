/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KP1_Pin GPIO_PIN_0
#define KP1_GPIO_Port GPIOC
#define KP2_Pin GPIO_PIN_1
#define KP2_GPIO_Port GPIOC
#define KP3_Pin GPIO_PIN_2
#define KP3_GPIO_Port GPIOC
#define KP4_Pin GPIO_PIN_3
#define KP4_GPIO_Port GPIOC
#define KP5_Pin GPIO_PIN_0
#define KP5_GPIO_Port GPIOA
#define KP6_Pin GPIO_PIN_1
#define KP6_GPIO_Port GPIOA
#define KP7_Pin GPIO_PIN_2
#define KP7_GPIO_Port GPIOA
#define KP8_Pin GPIO_PIN_3
#define KP8_GPIO_Port GPIOA
#define KP9_Pin GPIO_PIN_4
#define KP9_GPIO_Port GPIOA
#define KP10_Pin GPIO_PIN_5
#define KP10_GPIO_Port GPIOA
#define KP11_Pin GPIO_PIN_6
#define KP11_GPIO_Port GPIOA
#define KP12_Pin GPIO_PIN_7
#define KP12_GPIO_Port GPIOA
#define KP13_Pin GPIO_PIN_4
#define KP13_GPIO_Port GPIOC
#define KP14_Pin GPIO_PIN_5
#define KP14_GPIO_Port GPIOC
#define KP15_Pin GPIO_PIN_0
#define KP15_GPIO_Port GPIOB
#define KP16_Pin GPIO_PIN_1
#define KP16_GPIO_Port GPIOB
#define KP17_Pin GPIO_PIN_2
#define KP17_GPIO_Port GPIOB
#define KP18_Pin GPIO_PIN_10
#define KP18_GPIO_Port GPIOB
#define KP19_Pin GPIO_PIN_11
#define KP19_GPIO_Port GPIOB
#define KP20_Pin GPIO_PIN_12
#define KP20_GPIO_Port GPIOB
#define KP21_Pin GPIO_PIN_13
#define KP21_GPIO_Port GPIOB
#define KP22_Pin GPIO_PIN_14
#define KP22_GPIO_Port GPIOB
#define KP23_Pin GPIO_PIN_15
#define KP23_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOC
#define USB_VBUS_FS_Pin GPIO_PIN_8
#define USB_VBUS_FS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
