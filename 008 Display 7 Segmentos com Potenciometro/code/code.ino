// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void loop()
{
  if (analogRead(A2) >= 0 && analogRead(A2) <= 100) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  if (analogRead(A2) >= 101 && analogRead(A2) <= 200) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if (analogRead(A2) >= 201 && analogRead(A2) <= 300) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 301 && analogRead(A2) <= 400) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 401 && analogRead(A2) <= 500) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 501 && analogRead(A2) <= 600) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 601 && analogRead(A2) <= 700) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 701 && analogRead(A2) <= 800) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if (analogRead(A2) >= 801 && analogRead(A2) <= 900) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  if (analogRead(A2) >= 901) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}