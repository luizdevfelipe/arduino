void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  delay(5000); 
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(9, HIGH);
  delay(5000); 
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
}