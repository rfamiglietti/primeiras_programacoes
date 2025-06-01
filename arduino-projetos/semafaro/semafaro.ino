// C++ code
// Pinos dos LEDs
int ledVermelho = 13;
int ledAmarelo  = 12;
int ledVerde    = 11;

void setup() {
  // Configura os pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo,  OUTPUT);
  pinMode(ledVerde,    OUTPUT);
}

void loop() {
  // Verde aceso (liberado)
  digitalWrite(ledVerde,    HIGH);
  digitalWrite(ledAmarelo,  LOW);
  digitalWrite(ledVermelho, LOW);
  
  delay(2300); // 2.3 segundos

  // Amarelo aceso (atenção)
  digitalWrite(ledVerde,    LOW);
  digitalWrite(ledAmarelo,  HIGH);
  digitalWrite(ledVermelho, LOW);
  
  delay(1500); // 1.5 segundos

  // Vermelho aceso (pare)
  digitalWrite(ledVerde,     LOW);
  digitalWrite(ledAmarelo,   LOW);
  digitalWrite(ledVermelho,  HIGH);
  
  delay(2300); // 2.3 segundos
}