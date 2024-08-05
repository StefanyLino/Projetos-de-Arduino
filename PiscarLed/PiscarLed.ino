//Programa para piscar o led
void setup() {
  pinMode(10,OUTPUT); //define a porta do led e como saída
}

void loop() {
  digitalWrite(10,HIGH); //define a porta como alta/baixa, faz o led ligar
  delay(2000); //temporizador de 2 segundos
  digitalWrite(10,LOW); //define a porta como alta/baixa, faz o led desligar
  delay(2000);
}
