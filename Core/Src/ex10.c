/*
 * ex10.c
 *
 *  Created on: Sep 17, 2025
 *      Author: Khôi Nguyên
 */


#include "ex10.h"
#include "ex6.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"

void ex10_init(){
	ex6_init();
}
void ex10_run(){
	int sec = 0;
	int min = 53;
	int hour = 3;

	while(1){
		clearAllClock();
		setNumberOnClock(sec/5);
		setNumberOnClock(min/5);
		setNumberOnClock(hour);

		++sec;
		if(sec >= 60){
			sec = 0;
			++min;
		}
		if(min >= 60){
			min = 0;
			++hour;
		}
		if(hour >= 12){
			hour = 0;
		}

		HAL_Delay(10);
	}
}
