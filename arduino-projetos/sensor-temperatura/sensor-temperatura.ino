#include <LiquidCrystal.h>  // Inclui a biblioteca para controlar o display LCD

// Cria o objeto LCD com os pinos conectados ao Arduino: (RS, E, D4, D5, D6, D7)
LiquidCrystal LCD(12,11,7,6,5,4);

// Define o pino analógico onde o sensor de temperatura está conectado
int SensorTempPino = 0;

void setup()
{
  LCD.begin(16,2); // Inicializa o LCD com 16 colunas e 2 linhas
}

void loop()
{
  // Lê o valor analógico do sensor de temperatura (0 a 1023)
  float SensorTempTensao = analogRead(SensorTempPino);

  // Converte esse valor em tensão (0 a 5V)
  float Tensao = SensorTempTensao * 5 / 1024;

  // Converte a tensão em temperatura Celsius
  // Fórmula específica para sensor LM35 (cada 10mV = 1°C e 0.5V = 0°C)
  int TemperaturaC = round((Tensao - 0.5) * 100);

  LCD.clear(); // Limpa o conteúdo do LCD

  LCD.print("Temperatura:"); // Escreve a palavra "Temperatura:"
  LCD.setCursor(0,1);        // Move o cursor para o início da segunda linha
  LCD.print(TemperaturaC);   // Mostra o valor da temperatura
  LCD.write(B10110010);      // Escreve o símbolo de grau (°) em binário
  LCD.print("C");            // Escreve a letra C (Celsius)

  delay(200); // Aguarda 200 milissegundos antes de atualizar a leitura
}
