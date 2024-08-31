
int ledPin = 9;//Atribui o valor 9 a variável inteira ledPin, que irá representar o pino digital 9
void setup() {
  pinMode(ledPin, OUTPUT);//Define ledPin (pino 9) como saída
}
void loop() {
  digitalWrite(ledPin, HIGH);//Coloca ledPin em nível alto (5V)
  delay(2000);//Espera 2000 milissegundos (2 segundos)
  digitalWrite(ledPin, LOW);//Coloca ledPin em nível baixo (0V)
  delay(2000);//Espera 2000 milissegundos (2 segundos)
}