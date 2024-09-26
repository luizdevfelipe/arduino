#include <Servo.h>

Servo servo_6;
int i = 0;

void setup()
{
  servo_6.attach(6, 500, 2500);
  servo_6.write(i);
}

void loop()
{
  
  while (digitalRead(12) == LOW && i <= 180) {
      servo_6.write(i);
      i++;
      delay(30);
    }
  
  while (digitalRead(13) == LOW && i >= 0) {
    servo_6.write(i);
    i--;
    delay(30);
  }
  
  delay(10); 
}