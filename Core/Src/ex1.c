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

	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);  // yellow LED : OFF
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, ON);         // red LED : ON
}
void ex1_run(){
   int counter = 2;
   while(1){
	   counter--;
	   if(counter <= 0){
		   counter = 2;         //reset after 2s
		   HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);  //toggle yellow led
		   HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);      // toggle red led
	   }
	   HAL_Delay(1000);
   }
}
