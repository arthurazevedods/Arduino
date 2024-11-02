int conta = 0; // Variável para armazenar o valor a ser exibido no display

// Mapeamento dos segmentos do display para cada dígito (0 a 9)
byte displaySeteSeg[10][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },  // 0
  { 0, 1, 1, 0, 0, 0, 0 },  // 1
  { 1, 1, 0, 1, 1, 0, 1 },  // 2
  { 1, 1, 1, 1, 0, 0, 1 },  // 3
  { 0, 1, 1, 0, 0, 1, 1 },  // 4
  { 1, 0, 1, 1, 0, 1, 1 },  // 5
  { 1, 0, 1, 1, 1, 1, 1 },  // 6
  { 1, 1, 1, 0, 0, 0, 0 },  // 7
  { 1, 1, 1, 1, 1, 1, 1 },  // 8
  { 1, 1, 1, 1, 0, 1, 1 }   // 9
};

// Mapeamento dos pinos correspondentes aos segmentos do display
byte pinosSegmentos[7] = {2, 3, 4, 5, 6, 7, 8}; // Pinos dos segmentos A-G

void setup() {
  // Definindo os pinos dos segmentos como saída
  for (byte i = 0; i < 7; ++i) {
    pinMode(pinosSegmentos[i], OUTPUT);
  }
  
  pinMode(10, INPUT); // Botão de incremento
  Serial.begin(9600);
  ligaSegmentosDisplay(conta); // Exibe o dígito inicial (0)
}

void loop() {
  Serial.println(digitalRead(10));

  if (digitalRead(10) == 0) { // Verifica se o botão foi pressionado
    delay(500); // Debounce para evitar leitura dupla

    conta = (conta + 1) % 10; // Incrementa o valor e reseta para 0 ao atingir 10
    ligaSegmentosDisplay(conta); // Atualiza o display
  }
}

// Função para ligar os segmentos do display de acordo com o dígito
void ligaSegmentosDisplay(byte digito) {
  for (byte i = 0; i < 7; ++i) {
    digitalWrite(pinosSegmentos[i], displaySeteSeg[digito][i]);
  }
}
