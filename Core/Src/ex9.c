/*
 * ex9.c
 *
 *  Created on: Sep 17, 2025
 *      Author: Khôi Nguyên
 */

#include "ex9.h"
#include "ex6.h" //dung lai ex6_init()

#define ON 1
#define OFF 0

void ex9_init(){
	ex6_init();
}
void ex9_run(){
	int num = 12;

	while(1){
		--num;
		if(num < 0){
			num = 12;
			ex9_init(); // turn all led
		}

		clearNumberOnClock(num);

		HAL_Delay(1000);

	}
}

void clearNumberOnClock(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
			break;

		default:
			break;
	}
}
