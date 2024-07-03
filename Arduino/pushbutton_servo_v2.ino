#include<Servo.h>
Servo Myservo;
int pos=0;

void setup()
{
  pinMode(2,INPUT);
  Myservo.attach(3);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(2)==LOW){
    Myservo.write(80);
    Serial.println("x");
   
  }
  else
    
 Myservo.write(0);

}
