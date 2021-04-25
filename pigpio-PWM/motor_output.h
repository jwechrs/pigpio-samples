#include <stdint.h>
#define MOTOR_1_PIN 26

void pigpioInit(int p);
void motorInit();
void writeMotor(uint16_t pulseWidth);
void writeMotorValues();
void setupPWMFreq(uint8_t pwmFrequency);

// on = 0, off = 150 ~ 600
void writePWMOnChannel(uint8_t channel, uint16_t on, uint16_t off);
//int main(char* argv[]);
