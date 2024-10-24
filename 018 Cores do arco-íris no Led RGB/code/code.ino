int red = 3;
int blue = 5;
int green = 6;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  //Vermelho
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Laranja
  analogWrite(red, 0);
  analogWrite(green, 150);
  analogWrite(blue, 255);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Amarelo
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Verde
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Azul
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Roxo
  analogWrite(red, 150);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Violeta
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 180);
  delay(1000);
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(1000);
  //Branco
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(2000);
  //Apagado
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(2000);
}