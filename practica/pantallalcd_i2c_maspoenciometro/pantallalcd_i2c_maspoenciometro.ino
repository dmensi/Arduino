
#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>
 
// Constructor de la librería de LCD 16x2
// Aqui se configuran los pines asignados a la pantalla del PCF8574
// Este constructor es para usar con el modulo I2C que se muestra en las
// fotografias de nuestro sitio web. Para otros modelos, puede ser necesario
// cambiar los valores de acuerdo al esquemático del adaptador I2C. Los pines
// del arduino SIEMPRE son los correspondientes al I2C (SDA y SCL)
 
// Constructor sin control de backlight (retroiluminacion)
//LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7);
// Constructor con control de backlignt (retroiluminacion)
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);


void setup()
{
  // Indicar a la libreria que tenemos conectada una pantalla de 16x2
  lcd.begin(16, 2);
  // Mover el cursor a la primera posición de la pantalla (0, 0)
  lcd.clear();
  // Imprimir "Hola Mundo" en la primera linea
  lcd.print(" diego ");
  // Esperar un segundo
  delay(1000);
}
 
void loop()
{
  // Actualizar la pantalla completa cada segundo
  lcd.clear();
  // Imprimir encabezado
  lcd.print(" POTENCIOMETRO  ");
 
  // Realizar la lectura analogica en A0
  unsigned int val = analogRead(A0);
  //porcentaje  
  int por = map(val, 0, 1023, 0, 100); 
  // Convertir a voltaje
  float volts = (val * 5.0) / 1024.0;
 
  // Imprimir valores en la segunda linea
  lcd.setCursor(0, 1);
  lcd.print(por);
  lcd.setCursor(3,1);
  lcd.print("%");
  // Imprimir el voltaje en la segunda linea, despues del valor del ADC
  lcd.setCursor(7, 1);
  lcd.print(volts, 1);
  lcd.setCursor(10,1);
  lcd.print("V");
 
  // Esperar un segundo antes de continuar
  delay (1000);
}
