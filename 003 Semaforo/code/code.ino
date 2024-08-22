void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(4000); 
  digitalWrite(13, LOW);
  digitalWrite(9, HIGH);
  delay(4000); 
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(2000); 
  digitalWrite(11, LOW);
}