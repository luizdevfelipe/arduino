void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void loop()
{
  if (analogRead(A2) > 200) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
  if (analogRead(A2) > 500) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (analogRead(A2) > 800) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  Serial.print("Valor lido: ");
  Serial.println(analogRead(A2));
  delay(100);
}