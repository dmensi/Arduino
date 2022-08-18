// C++ code
//
/**
 * Regulador simple con un led 
 * 
 * En esta práctica se va a regular un conjunto de diodos led de color
 * blanco utilizando un potenciómetro.
 * 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
#define POT A0 
int pinPotenciometro = 0;
int ledPin1 = 10;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPin1, OUTPUT);
  
  // Inicializamos los pines a un valor BAJO
  analogWrite(ledPin1, 0);
  Serial.begin(9600);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  
  int vpot = analogRead(POT);
Serial.print("Valor POT: ");
Serial.print(vpot);
Serial.print("| Valor PWM: ");
Serial.println(vpot/4);
  
  
  int valor = analogRead(pinPotenciometro);
  valor = map(valor, 0, 1023, 0, 255);
  analogWrite(ledPin1, valor);
  delay(150);
  
}