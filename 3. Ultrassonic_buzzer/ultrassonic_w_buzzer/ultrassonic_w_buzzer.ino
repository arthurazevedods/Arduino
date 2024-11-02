#include <Ultrasonic.h>
// Inicializa o sensor nos pinos 4 (trigger) e 5 (echo)
Ultrasonic ultrasonic(4, 5);
int ledRed = 12;
int ledYellow = 11;
int buzzer = 2;

void setup() {
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Lê as informações do sensor em cm e polegadas
  long microsec = ultrasonic.timing();
  float cm = ultrasonic.convert(microsec, Ultrasonic::CM);

  // Exibe informações no serial monitor
  Serial.print("\nDistância em cm: ");
  Serial.print(cm);
  if(cm < 10.0){
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    tone(buzzer, 1500);
    delay(200);
  }else if(cm > 10.0 && cm < 20.0){
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, LOW);
    tone(buzzer, 300);
    delay(200);
  }else{
    digitalWrite(ledRed, LOW);
    noTone(buzzer);
  }

  delay(100);
}
