/*
 * ex3.c
 *
 *  Created on: Sep 14, 2025
 *      Author: Khôi Nguyên
 */

#include "ex3.h"

#define ON 1
#define OFF 0

typedef enum{
	RED,
	YELLOW,
	GREEN
} color;


void ex3_init(){
	// check 12 den cos sang het ko
	HAL_GPIO_TogglePin(RED_NG_GPIO_Port, RED_NG_Pin);
	HAL_GPIO_TogglePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin);
	HAL_GPIO_TogglePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin);
	HAL_GPIO_TogglePin(RED_DOC_GPIO_Port, RED_DOC_Pin);
	HAL_GPIO_TogglePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin);
	HAL_GPIO_TogglePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin);

}
void ex3_run(){
	color led_NG = RED;
	int counter_NG = 5;

	color led_DOC = GREEN;
	int counter_DOC = 3;

	while(1){
		//chieu ngang (NG)
		  switch (led_NG) {
			case RED:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, ON);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, OFF);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, OFF);

				--counter_NG;
				if(counter_NG <= 0){
					led_NG = GREEN ;
					counter_NG = 3;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, OFF);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, ON);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, OFF);

				--counter_NG;
				if(counter_NG <= 0){
					led_NG = RED ;
					counter_NG = 5;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, OFF);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, OFF);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, ON);

				--counter_NG;
				if(counter_NG <= 0){
					led_NG = YELLOW ;
					counter_NG = 2;
				}
				break;
			default:
				break;
		}

		//chieu doc (DOC)
		  switch (led_DOC) {
			case RED:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, ON);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, OFF);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, OFF);

				--counter_DOC;
				if(counter_DOC <= 0){
					led_DOC = GREEN ;
					counter_DOC = 3;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, OFF);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, ON);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, OFF);

				--counter_DOC;
				if(counter_DOC <= 0){
					led_DOC = RED ;
					counter_DOC = 5;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, OFF);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, OFF);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, ON);

				--counter_DOC;
				if(counter_DOC <= 0){
					led_DOC = YELLOW ;
					counter_DOC = 2;
				}
				break;
			default:
				break;
		}

		  HAL_Delay(1000);
	}


}





