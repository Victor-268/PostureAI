#include <Servo.h>    // add servo library

Servo myservo;        // Create servo object to control a servo


int potpin  =0;   // analog pin connected to potentiometer
int val;          // variable to read the value from the analog pin

void setup (){ 
  myservo.attach(9);  // attach servo to pin 9
  
}

void loop (){
  val = analogRead(potpin); 
  val = map (val, 0,1023,0,180); 
  myservo.write (val); 
  delay (15);
}
