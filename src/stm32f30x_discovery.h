/*
 * stm32f30x_discovery.h
 *
 *  Created on: Oct 5, 2015
 *      Author: Jeff Horn
 */

#ifndef STM32F30X_DISCOVERY_H_
#define STM32F30X_DISCOVERY_H_

#include "stm32f30x.h"

typedef enum
{
  LED3 = 0,
  LED4 = 1,
  LED5 = 2,
  LED6 = 3,
  LED7 = 4,
  LED8 = 5,
  LED9 = 6,
  LED10 = 7
} Led_TypeDef;

#define LEDn                             8

#define LED6_PIN                         GPIO_Pin_15
#define LED6_GPIO_PORT                   GPIOE
#define LED6_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED8_PIN                         GPIO_Pin_14
#define LED8_GPIO_PORT                   GPIOE
#define LED8_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED10_PIN                        GPIO_Pin_13
#define LED10_GPIO_PORT                  GPIOE
#define LED10_GPIO_CLK                   RCC_AHBPeriph_GPIOE

#define LED9_PIN                         GPIO_Pin_12
#define LED9_GPIO_PORT                   GPIOE
#define LED9_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED7_PIN                         GPIO_Pin_11
#define LED7_GPIO_PORT                   GPIOE
#define LED7_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED5_PIN                         GPIO_Pin_10
#define LED5_GPIO_PORT                   GPIOE
#define LED5_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED3_PIN                         GPIO_Pin_9
#define LED3_GPIO_PORT                   GPIOE
#define LED3_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED4_PIN                         GPIO_Pin_8
#define LED4_GPIO_PORT                   GPIOE
#define LED4_GPIO_CLK                    RCC_AHBPeriph_GPIOE

void STM_EVAL_LEDInit(Led_TypeDef Led);
void STM_EVAL_LEDOn(Led_TypeDef Led);
void STM_EVAL_LEDOff(Led_TypeDef Led);
void STM_EVAL_LEDToggle(Led_TypeDef Led);
void UART4_Init(void);
void USART1_Init(void);

#endif /* STM32F30X_DISCOVERY_H_ */
