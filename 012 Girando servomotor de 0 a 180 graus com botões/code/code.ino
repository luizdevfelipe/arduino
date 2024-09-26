// C++ code
//
#include <Servo.h>

Servo servo_6;

void setup()
{
  servo_6.attach(6, 500, 2500);
}

void loop()
{
  if (digitalRead(12) == LOW) {
  	servo_6.write(180);
  }
  
  if (digitalRead(13) == LOW) {
  	servo_6.write(0);
  }
  
  
  delay(10); // Delay a little bit to improve simulation performance
}