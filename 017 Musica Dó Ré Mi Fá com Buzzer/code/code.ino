int buzzer = 8;  //Atribui o valor 8 a variável buzzer, que representa o pino digital 8, onde o buzzer está conectado
void setup() {
  pinMode(buzzer, OUTPUT);  //Definindo o pino buzzer como de saída.
}
void loop() {
  tone(buzzer, 262, 200);  //Frequência e duração da nota Dó
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 330, 300);  //Frequência e duração da nota Mi
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 262, 100);  //Frequência e duração da nota Dó
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 262, 100);  //Frequência e duração da nota Dó
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 262, 200);  //Frequência e duração da nota Dó
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 392, 200);  //Frequência e duração da nota Sol
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 349, 200);  //Frequência e duração da nota Fá
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 330, 300);  //Frequência e duração da nota Mi
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 330, 300);  //Frequência e duração da nota Mi
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 330, 300);  //Frequência e duração da nota Mi
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 262, 200);  //Frequência e duração da nota Dó
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 294, 300);  //Frequência e duração da nota Ré
  delay(400);              //Intervalo de 200 milissegundos
  tone(buzzer, 330, 300);  //Frequência e duração da nota Mi
  delay(400);              //Intervalo de 300 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(600);              //Intervalo de 300 milissegundos
  tone(buzzer, 349, 300);  //Frequência e duração da nota Fá
  delay(2500);
}