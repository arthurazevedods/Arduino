int tempo = 100;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);
  delay(tempo);

  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
  delay(tempo);

  tempo = tempo + 50;

}