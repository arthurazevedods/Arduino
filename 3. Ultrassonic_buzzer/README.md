# Sensor de Distância Ultrassônico com Alarme (LED e Buzzer)

Este projeto utiliza um sensor ultrassônico para medir a distância e acionar um LED e um buzzer caso a distância detectada seja inferior a 10 cm. O código foi desenvolvido para ser utilizado com o Arduino e a biblioteca `Ultrasonic.h`.

## Descrição

O código faz a leitura da distância do sensor ultrassônico, e se a distância medida for menor que 10 cm, ele acende um LED e ativa um buzzer. As informações de distância também são exibidas no monitor serial.

### Componentes Necessários

- 1x Arduino
- 1x Sensor Ultrassônico HC-SR04
- 1x LED Vermelho
- 1x Buzzer
- Resistores (220Ω para o LED)
- Jumpers
- Protoboard

### Conexões

| Componente          | Pino Arduino |
|---------------------|--------------|
| VCC (Sensor)        | 5V           |
| GND (Sensor)        | GND          |
| TRIG (Sensor)       | 4            |
| ECHO (Sensor)       | 5            |
| LED                 | 12           |
| Buzzer              | 2            |
| GND (LED e Buzzer)  | GND          |

## Instalação

1. Clone este repositório ou baixe o arquivo `.ino`.
2. Abra o Arduino IDE e carregue o código.
3. Faça as conexões conforme a tabela acima.
4. Instale a biblioteca `Ultrasonic.h` necessária.

### Como Instalar a Biblioteca

A biblioteca `Ultrasonic.h` pode ser baixada diretamente do repositório GitHub:

[Ultrasonic Library - MakerHero](https://github.com/MakerHero/Ultrasonic)

Para instalar:
1. Faça o download da biblioteca.
2. No Arduino IDE, vá até **Sketch** > **Incluir Biblioteca** > **Adicionar biblioteca .ZIP...** e selecione o arquivo baixado.
3. Após a instalação, certifique-se de incluir a linha abaixo no seu código:

```cpp
#include <Ultrasonic.h>

## Como Usar

Carregue o código no Arduino. Abra o monitor serial para visualizar a distância medida pelo sensor em centímetros. Se a distância for menor que 10 cm, o LED vermelho será aceso e o buzzer emitirá um som.