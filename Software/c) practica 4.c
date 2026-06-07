#include <16F887.h>
#fuses HS, NOWDT, NOLVP
#use delay(clock=4000000)

// Configura SPI manualmente con registros (más seguro en PIC16F887)
#define SPI_SDI PIN_C4
#define SPI_SDO PIN_C5
#define SPI_CLK PIN_C3

#use spi(MASTER, CLK=SPI_CLK, DI=SPI_SDI, DO=SPI_SDO, MODE=0, BITS=8, STREAM=SPI_STREAM, BAUD=1000000)  // 1 Mbps

void main() {
   setup_adc_ports(sAN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   delay_ms(50);

   while(TRUE) {
      delay_ms(20); // Pequeño retardo de adquisición
      int valor_adc = read_adc();  // ADC de 8 bits

      spi_write(valor_adc); // Enviar dato al esclavo

      delay_ms(3000); // Esperar 3 segundos
   }
}

