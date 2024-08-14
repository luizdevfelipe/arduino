// Projeto - Piscar LED
int ledPin = 9;//Atribui o valor 9 a variável inteira ledPin, que irá representar o pino digital 9
void setup() {
 pinMode(ledPin, OUTPUT);//Define ledPin (pino 9) como saída
}
void loop() {
 digitalWrite(ledPin, HIGH);//Coloca ledPin em nível alto (5V)
 delay(1000);//Espera 1000 milissegundos (1 segundo)
 digitalWrite(ledPin, LOW);//Coloca ledPin em nível baixo (0V)
 delay(1000);//Espera 1000 milissegundos (1 segundo)
}