#include <16F887.h>
#device ADC=8
#fuses XT, NOWDT, BROWNOUT, NOPUT, NOLVP
#use delay(clock=20M)
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)

#define LCD_ENABLE_PIN PIN_D0
#define LCD_RS_PIN PIN_D1
#define LCD_RW_PIN PIN_D2
#define LCD_DATA4    PIN_D4
#define LCD_DATA5    PIN_D5
#define LCD_DATA6    PIN_D6
#define LCD_DATA7    PIN_D7
#include <lcd.c>

int valor_adc;
float voltaje;

void main() {
   // Watchdog desactivado con el fuse NOWDT, no es necesario setup_wdt()
   setup_adc_ports(AN0);                    // Usamos AN0 (RA0) como entrada analógica
   setup_adc(ADC_CLOCK_INTERNAL);           // Reloj interno para el ADC
   lcd_init();                              // Inicializar LCD

   while(true) {
      set_adc_channel(0);                   // Seleccionar canal AN0
      delay_ms(2);                          // Espera para estabilizar la señal
      valor_adc = read_adc();               // Leer ADC de 8 bits
      voltaje = ((float)valor_adc / 255.0) * 5.0;  // Calcular voltaje

      lcd_gotoxy(1,1);
      printf(lcd_putc,"Voltaje = %1.2fV", voltaje);
      lcd_gotoxy(1,2);
      printf(lcd_putc,"ADC = %3u", valor_adc);

      putc(valor_adc);                      // Enviar por UART
      delay_ms(500);                        // Espera entre lecturas
   }
}

