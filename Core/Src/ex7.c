/*
 * ex7.c
 *
 *  Created on: Sep 17, 2025
 *      Author: Khôi Nguyên
 */


#include "ex7.h"
#include "ex6.h" //dung lai ex6_init()

#define ON 1
#define OFF 0

void ex7_init(){
	ex6_init();
}

void ex7_run(){
	while(1){

		HAL_Delay(1000);
	}
}

void clearAllClock(){
	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
}
