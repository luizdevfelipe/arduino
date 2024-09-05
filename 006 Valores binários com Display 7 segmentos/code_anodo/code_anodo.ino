void setup() {
  pinMode(7, OUTPUT);  // Segmento A
  pinMode(8, OUTPUT);  // Segmento B
  pinMode(9, OUTPUT);  // Segmento C
  pinMode(10, OUTPUT); // Segmento D
  pinMode(11, OUTPUT); // Segmento E
  pinMode(12, OUTPUT); // Segmento F
  pinMode(13, OUTPUT); // Segmento G
  pinMode(2, INPUT);   // Botão 1
  pinMode(3, INPUT);   // Botão 2
  pinMode(4, INPUT);   // Botão 3

  // Inicializa os segmentos desligados (HIGH)
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void loop() {
  if ((digitalRead(2) == LOW && digitalRead(3) == LOW) && digitalRead(4) == LOW) {
    // Exibe 0
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH); // Segmento G apagado
  }
  if ((digitalRead(2) == LOW && digitalRead(3) == LOW) && digitalRead(4) == HIGH) {
    // Exibe 1
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  if ((digitalRead(2) == LOW && digitalRead(3) == HIGH) && digitalRead(4) == LOW) {
    // Exibe 2
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  if ((digitalRead(2) == LOW && digitalRead(3) == HIGH) && digitalRead(4) == HIGH) {
    // Exibe 3
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  if ((digitalRead(2) == HIGH && digitalRead(3) == LOW) && digitalRead(4) == LOW) {
    // Exibe 4
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if ((digitalRead(2) == HIGH && digitalRead(3) == LOW) && digitalRead(4) == HIGH) {
    // Exibe 5
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if ((digitalRead(2) == HIGH && digitalRead(3) == HIGH) && digitalRead(4) == LOW) {
    // Exibe 6
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if ((digitalRead(2) == HIGH && digitalRead(3) == HIGH) && digitalRead(4) == HIGH) {
    // Exibe 7
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  delay(200);
}
