/*
 * software_time.h
 *
 *  Created on: Oct 2, 2024
 *      Author: LEGION
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void TimerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
