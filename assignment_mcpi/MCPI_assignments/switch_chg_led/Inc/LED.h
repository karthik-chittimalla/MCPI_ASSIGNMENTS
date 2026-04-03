/*
 * LED.H
 *
 *  Created on: 29-Mar-2026
 *      Author: sunbeam
 */

#ifndef LED_H_
#define LED_H_

#include<stm32f407xx.h>
#define BV(n) (1<<(n))

#define GPIOD_CLK_EN   3
#define LED_GPIO   GPIOD


#define led_green   12
#define led_orange  13
#define led_red     14
#define led_blue    15


void init(uint8_t pin);
void led_on(uint8_t pin);
void led_off(uint8_t pin);
void toggle(uint8_t  pin);


#endif /* LED_H_ */
