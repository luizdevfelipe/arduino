#include <Adafruit_LiquidCrystal.h>
#include <Servo.h>

Adafruit_LiquidCrystal lcd_1(0);

Servo servo_6;
bool levantado = false;

void setup() {
  lcd_1.begin(16, 2);

  pinMode(6, OUTPUT);
  pinMode(12, INPUT);

  servo_6.attach(6, 500, 2500);
  servo_6.write(0);
}

void loop() {
  long distance;

  pinMode(A2, OUTPUT);
  digitalWrite(A2, LOW);
  delayMicroseconds(2);

  digitalWrite(A2, HIGH);
  delayMicroseconds(10);
  digitalWrite(A2, LOW);

  pinMode(A2, INPUT);
  distance = pulseIn(A2, HIGH) * 0.034 / 2;

  if (digitalRead(12) == LOW) {
    servo_6.write(90);
    levantado = true;
    lcd_1.clear();
    lcd_1.print("Aberto ");
  }
  if (levantado && distance >= 20) {
    lcd_1.clear();
    lcd_1.print("Fechando");
    delay(5000);
    servo_6.write(0);
    lcd_1.clear();
    lcd_1.print("Fechado");
    levantado = false;
  }

  delay(10);
}