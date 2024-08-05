//Programa para piscar 2 leds
void setup() {
  pinMode(10,OUTPUT); //define a porta do led e como saída
  pinMode(8,OUTPUT); //define a porta do led e como saída
}

void loop() {
  digitalWrite(10,HIGH); //manda um sinal alto/baixo para a porta 10, faz o led ligar
  delay(2000); //temporizador de 2 segundos
  digitalWrite(10,LOW); //manda um sinal alto/baixo para a porta 10, faz o led desligar
  delay(2000);
  digitalWrite(8,HIGH); //manda um sinal alto/baixo para a porta 10, faz o led ligar
  delay(2000); //temporizador de 2 segundos
  digitalWrite(8,LOW); //manda um sinal alto/baixo para a porta 10, faz o led desligar
  delay(2000);
}
