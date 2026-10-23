# Laboratorio-3-sEMG
# Simulador de sEMG a partir de registros reales 🦾

Repositorio con el código fuente y archivos del Laboratorio N.° 3 de Instrumentación Biomédica I (UNMSM).

## Archivos incluidos
* **`Labo3.ipynb`**: Cuaderno de Colab con el procesamiento de las señales en Python (lectura de GRABMyo, concatenación, escalado y simulación del DAC).
* **`semg.h`**: Archivo de cabecera exportado con el arreglo de 30 720 muestras escaladas a 8 bits (0-255).
* **`Reproductor_sEMG.ino`**: Firmware para ESP32 encargado de reproducir la secuencia por el pin DAC (GPIO25) a 2048 Hz.
