#include "motor_output.h"
#include <iostream>
#include <stdint.h>
#include <pigpiod_if2.h>

#define MOTOR_1_PIN 13  // Pin number (GPIO index) on raspberry pi

#include "unistd.h"

int msystempi;
extern uint16_t motorValues[4];
void pigpioInit(int p){
  //pi = pigpio_start(0,0);
  msystempi = p;
}

void motorInit(){
  set_mode(msystempi, MOTOR_1_PIN, PI_OUTPUT);
  //set_PWM_frequency(msystempi, MOTOR_1_PIN,10000);
  //uint8_t gpioPins[] = {RIGHT_MOTOR_GPIO_PIN, LEFT_MOTOR_GPIO_PIN};
  //setupPWMFreq(60);
}

void writeMotor(uint16_t pulseWidth){
  set_servo_pulsewidth(msystempi, MOTOR_1_PIN, pulseWidth);
}

// int main(char* argv[]){
//   std::cout << "Motor main" << std::endl;
//   pigpioInit();
//   writeMotor(1500);
//   std::cout << "main end" << std::endl;
// }
