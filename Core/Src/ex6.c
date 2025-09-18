/*
 * ex6.c
 *
 *  Created on: Sep 17, 2025
 *      Author: Khôi Nguyên
 */


#include "ex6.h"

#define ON 1
#define OFF 0

void ex6_init(){
	// test 12 led
	HAL_GPIO_TogglePin(LED_0_GPIO_Port, LED_0_Pin);
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
	HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
	HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
	HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
	HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
	HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
	HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
}

void ex6_run(){
	int counter =  12;
	while(1){

		if(counter < 0){
			counter = 12;

		}

		switch (counter) {
			case 0:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
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
				break;
			case 1:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
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
				break;
			case 2:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 3:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 4:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 5:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 6:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 7:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, ON);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 8:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, ON);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 9:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, ON);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 10:
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
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, ON);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, OFF);
				break;
			case 11:
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
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, ON);
				break;
			default:
				break;
		}
		--counter;
		HAL_Delay(1000);
	}
}
