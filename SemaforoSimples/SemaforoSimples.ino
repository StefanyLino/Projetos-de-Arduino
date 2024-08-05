//Semáforo simples
#define led1 11
#define led2 12
#define led3 13

int t1 = 2000;
int t2 = 3000;

void setup()
{
  pinMode(led1, OUTPUT); // define o pino 9 como saída
  pinMode(led2, OUTPUT); // define o pino 12 como saída
  pinMode(led3, OUTPUT); // define o pino 13 como saída

} 

void loop()
{
  digitalWrite(led1, HIGH);
  delay(t1); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t1); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t1); 
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(t1); 
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(t1); 
  digitalWrite(led1, LOW);
}
