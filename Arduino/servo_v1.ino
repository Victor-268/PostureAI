#include <Servo.h>

Servo servoMotor; 

int pos = 0;


void setup() {
  servoMotor.attach(5);

}

void loop() {
  for (pos = 0; pos <= 110; pos += 1){
    servoMotor.write(pos);
    delay(45);
  }

}
