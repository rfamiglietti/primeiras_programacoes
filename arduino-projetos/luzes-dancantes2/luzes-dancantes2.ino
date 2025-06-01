// Tempo de atraso entre os LEDs (em milissegundos)
int tempo = 90;

// Definição dos pinos dos LEDs
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;

void setup() {
  // Configura os pinos como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {

  // Sequência indo do LED7 ao LED1
  for (byte i = 0; i < 12; i++) {
    digitalWrite(led7, HIGH); delay(tempo); digitalWrite(led7, LOW);
    digitalWrite(led6, HIGH); delay(tempo); digitalWrite(led6, LOW);
    digitalWrite(led5, HIGH); delay(tempo); digitalWrite(led5, LOW);
    digitalWrite(led4, HIGH); delay(tempo); digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH); delay(tempo); digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH); delay(tempo); digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH); delay(tempo); digitalWrite(led1, LOW);
  }

  // Vai e volta nos LEDs
  for (byte i = 0; i < 12; i++) {
    digitalWrite(led1, HIGH); delay(tempo); digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH); delay(tempo); digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH); delay(tempo); digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH); delay(tempo); digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH); delay(tempo); digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH); delay(tempo); digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH); delay(tempo); digitalWrite(led7, LOW);

    digitalWrite(led7, HIGH); delay(tempo); digitalWrite(led7, LOW);
    digitalWrite(led6, HIGH); delay(tempo); digitalWrite(led6, LOW);
    digitalWrite(led5, HIGH); delay(tempo); digitalWrite(led5, LOW);
    digitalWrite(led4, HIGH); delay(tempo); digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH); delay(tempo); digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH); delay(tempo); digitalWrite(led2, LOW);
  }

  // Pisca LED por LED da esquerda para a direita
  for (byte i = 0; i < 12; i++) {
    digitalWrite(led1, HIGH); delay(tempo); digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH); delay(tempo); digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH); delay(tempo); digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH); delay(tempo); digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH); delay(tempo); digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH); delay(tempo); digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH); delay(tempo); digitalWrite(led7, LOW);
  }

  // Pisca grupos de LEDs
  for (byte i = 0; i < 12; i++) {
    for (int j = 0; j < 3; j++) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      delay(100);
    }

    for (int j = 0; j < 3; j++) {
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      delay(100);
    }
  }

  // Alternância entre grupos de LEDs
  for (byte i = 0; i < 12; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);

    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }

  // Efeitos de luz "espelhados"
  for (byte i = 0; i < 20; i++) {
    digitalWrite(led1, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led1, LOW);  digitalWrite(led7, LOW);

    digitalWrite(led2, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led2, LOW);  digitalWrite(led7, LOW);

    digitalWrite(led3, HIGH); digitalWrite(led6, HIGH); delay(150);
    digitalWrite(led3, LOW);  digitalWrite(led6, LOW);

    digitalWrite(led4, HIGH); digitalWrite(led5, HIGH); delay(150);
    digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  }

  for (byte i = 0; i < 20; i++) {
    digitalWrite(led4, HIGH); digitalWrite(led5, HIGH); delay(150);
    digitalWrite(led4, LOW);  digitalWrite(led5, LOW);

    digitalWrite(led3, HIGH); digitalWrite(led6, HIGH); delay(150);
    digitalWrite(led3, LOW);  digitalWrite(led6, LOW);

    digitalWrite(led2, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led2, LOW);  digitalWrite(led7, LOW);

    digitalWrite(led1, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led1, LOW);  digitalWrite(led7, LOW);
  }

  for (byte i = 0; i < 20; i++) {
    digitalWrite(led1, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led1, LOW);  digitalWrite(led7, LOW);

    digitalWrite(led2, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led2, LOW);  digitalWrite(led7, LOW);

    digitalWrite(led3, HIGH); digitalWrite(led6, HIGH); delay(150);
    digitalWrite(led3, LOW);  digitalWrite(led6, LOW);

    digitalWrite(led4, HIGH); digitalWrite(led5, HIGH); delay(150);
    digitalWrite(led4, LOW);  digitalWrite(led5, LOW);

    digitalWrite(led3, HIGH); digitalWrite(led6, HIGH); delay(150);
    digitalWrite(led3, LOW);  digitalWrite(led6, LOW);

    digitalWrite(led2, HIGH); digitalWrite(led7, HIGH); delay(150);
    digitalWrite(led2, LOW);  digitalWrite(led7, LOW);
  }
}
