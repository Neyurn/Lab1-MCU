/*
 * ex5.c
 *
 *  Created on: Sep 15, 2025
 *      Author: Khôi Nguyên
 */


#include "ex5.h"
#include "ex4.h" // dung lai ham display7SEG and ex4_init

//for 7SEG
#define ON 0
#define OFF 1
////for led
#define LED_ON 1
#define LED_OFF 0

typedef enum{
	RED,
	YELLOW,
	GREEN
} color;

void ex5_init(){
	// check 7SEG
	ex4_init();
	//check 4-way led ( 12 led)
	HAL_GPIO_TogglePin(RED_NG_GPIO_Port, RED_NG_Pin);
	HAL_GPIO_TogglePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin);
	HAL_GPIO_TogglePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin);
	HAL_GPIO_TogglePin(RED_DOC_GPIO_Port, RED_DOC_Pin);
	HAL_GPIO_TogglePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin);
	HAL_GPIO_TogglePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin);
}

void ex5_run(){
	color led_NG = RED;
	int counter_NG = 5;

	color led_DOC = GREEN;
	int counter_DOC = 3;

	while(1){
		//chieu ngang (NG)
		  display7SEG(counter_NG);
		  switch (led_NG) {
			case RED:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, LED_ON);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, LED_OFF);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, LED_OFF);

				--counter_NG;
				if(counter_NG <= 0){
					led_NG = GREEN ;
					counter_NG = 3;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, LED_OFF);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, LED_ON);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, LED_OFF);

				--counter_NG;
				if(counter_NG <= 0){
					led_NG = RED ;
					counter_NG = 5;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(RED_NG_GPIO_Port, RED_NG_Pin, LED_OFF);
				HAL_GPIO_WritePin(YELLOW_NG_GPIO_Port, YELLOW_NG_Pin, LED_OFF);
				HAL_GPIO_WritePin(GREEN_NG_GPIO_Port, GREEN_NG_Pin, LED_ON);

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
		  display7SEG_DOC(counter_DOC);
		  switch (led_DOC) {
			case RED:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, LED_ON);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, LED_OFF);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, LED_OFF);

				--counter_DOC;
				if(counter_DOC <= 0){
					led_DOC = GREEN ;
					counter_DOC = 3;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, LED_OFF);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, LED_ON);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, LED_OFF);

				--counter_DOC;
				if(counter_DOC <= 0){
					led_DOC = RED ;
					counter_DOC = 5;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(RED_DOC_GPIO_Port, RED_DOC_Pin, LED_OFF);
				HAL_GPIO_WritePin(YELLOW_DOC_GPIO_Port, YELLOW_DOC_Pin, LED_OFF);
				HAL_GPIO_WritePin(GREEN_DOC_GPIO_Port, GREEN_DOC_Pin, LED_ON);

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

void display7SEG_DOC(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);

			break;
		case 1:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);

			break;
		case 2:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, OFF);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		case 3:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		case 4:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, OFF);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		case 5:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, OFF);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		case 7:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, OFF);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, OFF);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, OFF);

			break;
		case 8:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, ON);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		case 9:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, ON);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, ON);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, ON);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, ON);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, OFF);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, ON);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, ON);

			break;
		default:
			break;
	}
}
