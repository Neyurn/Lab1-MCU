/*
 * ex2.c
 *
 *  Created on: Sep 14, 2025
 *      Author: Khôi Nguyên
 */

#include "ex2.h"

#define ON 0
#define OFF 1


typedef enum{
	RED,
	YELLOW,
	GREEN
} color;

void ex2_init(){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}
void ex2_run(){
	color led = RED;
	int counter = 5;
	while(1){
			  switch (led) {
				case RED:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, ON);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);

					--counter;
					if(counter <= 0){
						led = GREEN ;
						counter = 3;
					}
					break;
				case YELLOW:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, ON);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);

					--counter;
					if(counter <= 0){
						led = RED ;
						counter = 5;
					}
					break;
				case GREEN:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, ON);

					--counter;
					if(counter <= 0){
						led = YELLOW ;
						counter = 2;
					}
					break;
				default:
					break;
			}
			  HAL_Delay(1000);
	}
}
