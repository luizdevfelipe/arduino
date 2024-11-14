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
  pinMode(A0, INPUT);

  digitalWrite(13, HIGH);  // G
  digitalWrite(12, HIGH);  // F
  digitalWrite(11, HIGH);  // E
  digitalWrite(10, HIGH);  // D
  digitalWrite(9, HIGH);   // C
  digitalWrite(8, HIGH);   // B
  digitalWrite(7, HIGH);   // A
}

void loop() {
  int tempo = 50;
  int cont = 0;
  randomSeed(analogRead(A0));

  if (digitalRead(3) == LOW) {
    int aleatorio = random(25, 65);

    for (int i = 0; i <= aleatorio; i++) {
      acende(random(1, 10));
      if (cont <= aleatorio && tempo <= 2000) {
        cont++;
        tempo = tempo + 10;
      }
      delay(tempo);
    }
  }
  delay(10);
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

  if (valor == 7) {
    digitalWrite(13, HIGH);  // G
    digitalWrite(12, HIGH);  // F
    digitalWrite(11, HIGH);  // E
    digitalWrite(10, HIGH);  // D
    digitalWrite(9, LOW);  // C
    digitalWrite(8, LOW);  // B
    digitalWrite(7, LOW);  // A
  }

  if (valor == 8) {
    digitalWrite(13, LOW);  //G
    digitalWrite(12, LOW);  // F
    digitalWrite(11, LOW);  // E
    digitalWrite(10, LOW);  // D
    digitalWrite(9, LOW);   // C
    digitalWrite(8, LOW);  // B
    digitalWrite(7, LOW);   // A
  }

  if (valor == 9) {
    digitalWrite(13, LOW);  // G
    digitalWrite(12, LOW);  // F
    digitalWrite(11, HIGH);  // E
    digitalWrite(10, LOW);  // D
    digitalWrite(9, LOW);   // C
    digitalWrite(8, LOW);  // B
    digitalWrite(7, LOW);   // A
  }
}