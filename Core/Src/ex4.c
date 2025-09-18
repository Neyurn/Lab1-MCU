/*
 * ex4.c
 *
 *  Created on: Sep 14, 2025
 *      Author: Khôi Nguyên
 */

#include "ex4.h"

#define ON 0
#define OFF 1


void ex4_init()
{
	//check 7SEG hd all ko
	HAL_GPIO_TogglePin(SEG_0_GPIO_Port, SEG_0_Pin);
	HAL_GPIO_TogglePin(SEG_1_GPIO_Port, SEG_1_Pin);
	HAL_GPIO_TogglePin(SEG_2_GPIO_Port, SEG_2_Pin);
	HAL_GPIO_TogglePin(SEG_3_GPIO_Port, SEG_3_Pin);
	HAL_GPIO_TogglePin(SEG_4_GPIO_Port, SEG_4_Pin);
	HAL_GPIO_TogglePin(SEG_5_GPIO_Port, SEG_5_Pin);
	HAL_GPIO_TogglePin(SEG_6_GPIO_Port, SEG_6_Pin);
}

void ex4_run(){
	int counter = 0 ;
	while(1){
		  if(counter >= 10) counter = 0;
		   display7SEG(counter++);

		   HAL_Delay(1000);
	}
}

void display7SEG(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, OFF);

			break;
		case 1:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, OFF);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, OFF);

			break;
		case 2:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, OFF);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 3:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 4:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, OFF);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 5:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, OFF);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, OFF);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, OFF);

			break;
		case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, ON);

			break;
		default:
			break;
	}
}
