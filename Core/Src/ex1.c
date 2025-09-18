/*
 * ex1.c
 *
 *  Created on: Sep 14, 2025
 *      Author: Khôi Nguyên
 */


#include "ex1.h"

#define ON 0
#define OFF 1

void ex1_init(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
}
void ex1_run(){
   int counter = 2;
   while(1){
	   counter--;
	   if(counter <= 0){
		   counter = 2;
		   HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
		   HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	   }
	   HAL_Delay(1000);
   }
}
