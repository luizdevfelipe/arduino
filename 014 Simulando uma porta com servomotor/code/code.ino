#include <Servo.h>

Servo servo_6;

void setup()
{
  servo_6.attach(6, 500, 2500);
  servo_6.write(0);
}

void loop()
{
  if (digitalRead(12) == LOW) {
  	servo_6.write(90);
    delay(10000);
    servo_6.write(0);
  }
  
  delay(10);
}