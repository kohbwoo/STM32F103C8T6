/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define L15_Pin GPIO_PIN_13
#define L15_GPIO_Port GPIOC
#define L14_Pin GPIO_PIN_14
#define L14_GPIO_Port GPIOC
#define L13_Pin GPIO_PIN_15
#define L13_GPIO_Port GPIOC
#define L12_Pin GPIO_PIN_0
#define L12_GPIO_Port GPIOA
#define L11_Pin GPIO_PIN_1
#define L11_GPIO_Port GPIOA
#define L10_Pin GPIO_PIN_2
#define L10_GPIO_Port GPIOA
#define L9_Pin GPIO_PIN_3
#define L9_GPIO_Port GPIOA
#define L8_Pin GPIO_PIN_4
#define L8_GPIO_Port GPIOA
#define L7_Pin GPIO_PIN_5
#define L7_GPIO_Port GPIOA
#define L6_Pin GPIO_PIN_6
#define L6_GPIO_Port GPIOA
#define L5_Pin GPIO_PIN_7
#define L5_GPIO_Port GPIOA
#define L4_Pin GPIO_PIN_0
#define L4_GPIO_Port GPIOB
#define L3_Pin GPIO_PIN_1
#define L3_GPIO_Port GPIOB
#define L2_Pin GPIO_PIN_10
#define L2_GPIO_Port GPIOB
#define L1_Pin GPIO_PIN_11
#define L1_GPIO_Port GPIOB
#define R1_Pin GPIO_PIN_12
#define R1_GPIO_Port GPIOB
#define R2_Pin GPIO_PIN_13
#define R2_GPIO_Port GPIOB
#define R3_Pin GPIO_PIN_14
#define R3_GPIO_Port GPIOB
#define R4_Pin GPIO_PIN_15
#define R4_GPIO_Port GPIOB
#define R5_Pin GPIO_PIN_8
#define R5_GPIO_Port GPIOA
#define R6_Pin GPIO_PIN_9
#define R6_GPIO_Port GPIOA
#define R7_Pin GPIO_PIN_10
#define R7_GPIO_Port GPIOA
#define R8_Pin GPIO_PIN_11
#define R8_GPIO_Port GPIOA
#define R9_Pin GPIO_PIN_12
#define R9_GPIO_Port GPIOA
#define R10_Pin GPIO_PIN_15
#define R10_GPIO_Port GPIOA
#define R11_Pin GPIO_PIN_3
#define R11_GPIO_Port GPIOB
#define R12_Pin GPIO_PIN_4
#define R12_GPIO_Port GPIOB
#define R13_Pin GPIO_PIN_5
#define R13_GPIO_Port GPIOB
#define R14_Pin GPIO_PIN_6
#define R14_GPIO_Port GPIOB
#define R15_Pin GPIO_PIN_7
#define R15_GPIO_Port GPIOB
#define R16_Pin GPIO_PIN_8
#define R16_GPIO_Port GPIOB
#define R17_Pin GPIO_PIN_9
#define R17_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
