#include <16F887.h>
#fuses HS, NOWDT, NOLVP
#use delay(clock=4000000)

#use i2c(SLAVE, SDA=PIN_C4, SCL=PIN_C3, ADDRESS=0x50) // Dirección 0x50
#include <lcd.c>

int8 dato_recibido;

#INT_SSP
void i2c_isr() {
   int estado = i2c_isr_state();

   if (estado == 1) {
      dato_recibido = i2c_read();
   }
}

void main() {
   lcd_init();
   lcd_putc("\fEsperando dato");

   enable_interrupts(GLOBAL);
   enable_interrupts(INT_SSP);

   float voltaje;

   while(TRUE) {
      voltaje = (dato_recibido * 5.0) / 255.0;

      lcd_gotoxy(1, 1);
      printf(lcd_putc, "ADC: %3u     ", dato_recibido);

      lcd_gotoxy(1, 2);
      printf(lcd_putc, "Volt: %1.2f V ", voltaje);

      delay_ms(300);
   }
}

