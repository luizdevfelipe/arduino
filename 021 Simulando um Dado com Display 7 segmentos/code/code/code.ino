void acende(int valor);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(3, INPUT);

  digitalWrite(13, HIGH);  // G
  digitalWrite(12, HIGH);  // F
  digitalWrite(11, HIGH);  // E
  digitalWrite(10, HIGH);  // D
  digitalWrite(9, HIGH);   // C
  digitalWrite(8, HIGH);   // B
  digitalWrite(7, HIGH);   // A
}

void loop() {
  if (digitalRead(3) == LOW) {
    for (int i = 0; i <= random(8, 20); i++) {
      acende(random(1, 7));
      delay(1000);
    }
  }
  delay(10);  // Delay a little bit to improve simulation performance
}

void acende(int valor) {
  if (valor == 1) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
  }

  if (valor == 2) {
    digitalWrite(13, LOW);   // G
    digitalWrite(12, HIGH);  // F
    digitalWrite(11, LOW);   // E
    digitalWrite(10, LOW);   // D
    digitalWrite(9, HIGH);   // C
    digitalWrite(8, LOW);    // B
    digitalWrite(7, LOW);    // A
  }

  if (valor == 3) {
    digitalWrite(13, LOW);   // G
    digitalWrite(12, HIGH);  // F
    digitalWrite(11, HIGH);  // E
    digitalWrite(10, LOW);   // D
    digitalWrite(9, LOW);    // C
    digitalWrite(8, LOW);    // B
    digitalWrite(7, LOW);    // A
  }

  if (valor == 4) {
    digitalWrite(13, LOW);   // G
    digitalWrite(12, LOW);   // F
    digitalWrite(11, HIGH);  // E
    digitalWrite(10, HIGH);  // D
    digitalWrite(9, LOW);    // C
    digitalWrite(8, LOW);    // B
    digitalWrite(7, HIGH);   // A
  }

  if (valor == 5) {
    digitalWrite(13, LOW);   // G
    digitalWrite(12, LOW);   // F
    digitalWrite(11, HIGH);  // E
    digitalWrite(10, LOW);   // D
    digitalWrite(9, LOW);    // C
    digitalWrite(8, HIGH);   // B
    digitalWrite(7, LOW);    // A
  }

  if (valor == 6) {
    digitalWrite(13, LOW);  // G
    digitalWrite(12, LOW);  // F
    digitalWrite(11, LOW);  // E
    digitalWrite(10, LOW);  // D
    digitalWrite(9, LOW);   // C
    digitalWrite(8, HIGH);  // B
    digitalWrite(7, LOW);   // A
  }
}