int chave = 0;

void setup()
{ 
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
    if (digitalRead(3) == HIGH) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    if (digitalRead(4) == HIGH) {
      digitalWrite(10, HIGH);
    } else {
      digitalWrite(10, LOW);
    }
  }
  delay(10);
}