#include <iostream>
#include <pigpiod_if2.h>
#include "unistd.h"
#include "motor_output.h"

#include <signal.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

int main(char* argv[]){
  std::cout << "Motor main" << std::endl;
  int pi = pigpio_start(0, 0);
  pigpioInit(pi);
  writeMotor(1500);
  std::cout << "main end" << std::endl;
}
