#include "semg.h" // Incluye el arreglo generado en Python

const int pinDAC = 25; // GPIO25 exigido en la guía
unsigned long instante_anterior = 0;
const unsigned long periodo = 488; // 1/2048 s expresado en microsegundos (aprox 488.3 µs)
uint32_t i = 0;

void setup() {
  // Inicializamos el temporizador
  instante_anterior = micros();
}

void loop() {
  unsigned long instante_actual = micros();
  
  // Temporización sin delay(), evaluando si ya transcurrió el periodo
  if (instante_actual - instante_anterior >= periodo) {
    
    // Se suma el periodo al instante programado anterior para evitar error acumulativo
    instante_anterior += periodo; 
    
    // Escritura en el DAC
    dacWrite(pinDAC, SEMG[i]);
    
    // Incremento del índice y reinicio al llegar al final de la secuencia
    i++;
    if (i >= N_SEMG) {
      i = 0;
    }
  }
}