void setup()
{
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
 
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
}

void loop()
{
  int botao1 = digitalRead(7);
  int botao2 = digitalRead(6);
  int botao3 = digitalRead(5);
  int botao4 = digitalRead(4);
  
  if(botao4 == LOW){
  	analogWrite(11, 0);
  } 
  
  if(botao3 == LOW){
  	analogWrite(11, 85);
  } 
  
  if(botao2 == LOW){
  	analogWrite(11, 170);
  } 
  
  if(botao1 == LOW){
  	analogWrite(11, 255);
  } 
  
  delay(10);
}