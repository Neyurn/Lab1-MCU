/*
 * ex8.c
 *
 *  Created on: Sep 17, 2025
 *      Author: Khôi Nguyên
 */

#include "ex8.h"
#include "ex6.h" //dung lai ex6_init()
#include "ex7.h" // use clearAllClock()

#define ON 1
#define OFF 0

void ex8_init(){
	ex6_init();
}

void ex8_run(){
	clearAllClock(); 		// turn off all led -> set led theo num
	int num = 12;
    // set lan luowt 12 led, then turn off all and reset num
	while(1){
		--num;
		if(num < 0){
			num = 12;
			clearAllClock();
		}

		setNumberOnClock(num);

		HAL_Delay(1000);

	}
}

void setNumberOnClock(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, ON);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, ON);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, ON);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, ON);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, ON);
			break;

		default:
			break;
	}
}
