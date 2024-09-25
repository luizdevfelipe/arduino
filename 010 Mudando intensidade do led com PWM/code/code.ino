void setup()
{
  pinMode(6, OUTPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int potenciometro = analogRead(A2);
  
  int pwm = map(potenciometro, 0, 1023, 0, 255);
  
  Serial.print("Valor PWM: ");
  Serial.println(pwm);
  
  analogWrite(6, pwm);  
  
  delay(500);
}