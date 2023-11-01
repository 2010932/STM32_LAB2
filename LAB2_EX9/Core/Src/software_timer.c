/*
 * software_timer.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Admin
 */
/*
 * software_timer.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Admin
 */
#include "software_timer.h"

int timer1_counter=0;
int timer1_flag=0;
int timer2_counter=0;
int timer2_flag=0;
int timer3_counter=0;
int timer3_flag=0;
void setTimer1(int duration){
	timer1_counter=duration;
	timer1_flag=0;
}
void setTimer2(int duration){
	timer2_counter=duration;
	timer2_flag=0;
}
void setTimer3(int duration){
	timer3_counter=duration;
	timer3_flag=0;
}
void timeRun(){
	if (timer1_counter>0){
		timer1_counter--;
		if (timer1_counter<=0){
			timer1_counter=1;
			timer1_flag=1;
		}
	}
	if (timer2_counter>0){
			timer2_counter--;
			if (timer2_counter<=0){
				timer2_counter=100;
				timer2_flag=1;
			}
		}
	if (timer3_counter>0){
				timer3_counter--;
				if (timer3_counter<=0){
					timer3_counter=100;
					timer3_flag=1;
				}
	}
}



