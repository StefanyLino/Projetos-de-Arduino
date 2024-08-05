int botao = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT); //botão
}

void loop(){
  botao = digitalRead(12);
  if (botao == HIGH) {
    digitalWrite(13,HIGH); //Botão pressionado, acende o LED.
  }
  else {
    digitalWrite(13,LOW); //Botão não pressionado, apaga o LED. 
  }
}
