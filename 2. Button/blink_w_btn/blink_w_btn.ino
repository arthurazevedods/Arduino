int buttonPin = 2;//Define buttonPin no pino digital 2 
int ledPin = 10;//Define ledPin no pino digital 10 
int estadoButton = 0;//Variável responsável por armazenar o estado do botão (ligado e desligado)
int count = 0;
void setup(){ 
  pinMode(ledPin , OUTPUT);//Define ledPin (pino 10) como saída 
  pinMode(buttonPin , INPUT);//Define buttonPin (pino 2) como entrada 

  Serial.begin(9600);
} 
void loop(){ 
  
  estadoButton = digitalRead(buttonPin);//Lê o valor de buttonPin e armazena em estadoButton 
  if (estadoButton == HIGH) {//Se estadoButton for igual a HIGH ou 1 
    
    digitalWrite(ledPin , HIGH);//Define ledPin como HIGH, ligando o LED
    //bloco de código feito para controlar para que a mensagem não precise ser 
    //escrita várias vezes no Serial
    if(count == 0){
      Serial.println("LED está ligado"); 
    }
    count = 1;
    delay(100);//Intervalo de 100 milissegundos 
  } //Senão = estadoButton for igual a LOW ou 0 
  else {
    digitalWrite(ledPin, LOW);//Define ledPin como LOW, desligando o LED  
    //bloco de código feito para controlar para que a mensagem não precise ser 
    //escrita várias vezes no Serial
    if(count == 1){
      Serial.println("LED está desligado"); 
    }
    count = 0;
  } 
} 