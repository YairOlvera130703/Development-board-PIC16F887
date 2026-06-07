// === ESCLAVO SPI: Recibe dato y muestra en LCD ===
#include <16F887.h>
#fuses HS, NOWDT, NOLVP
#use delay(clock=4000000)

// Pines SPI definidos explícitamente
#define SPI_SDI PIN_C4
#define SPI_SDO PIN_C5
#define SPI_CLK PIN_C3

#use spi(SLAVE, CLK=SPI_CLK, DI=SPI_SDI, DO=SPI_SDO, MODE=0, BITS=8, STREAM=SPI_STREAM)

#include <lcd.c> // Asegúrate de tener esta librería incluida en tu carpeta del proyecto

void main() {
   lcd_init();  // Inicializa LCD
   lcd_putc("\fEsperando dato");

   int recibido;
   float voltaje;

   while(TRUE) {
      recibido = spi_read(); // Espera y lee dato recibido (bloqueante)
      
      voltaje = (recibido * 5.0) / 255.0;

      lcd_gotoxy(1, 1);
      printf(lcd_putc, "ADC: %3u     ", recibido);

      lcd_gotoxy(1, 2);
      printf(lcd_putc, "Volt: %1.2f V ", voltaje);

      delay_ms(300); // Pequeño retardo para evitar parpadeos
   }
}

