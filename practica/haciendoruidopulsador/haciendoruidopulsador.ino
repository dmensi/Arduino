void setup() {
pinMode(8,OUTPUT); // le decimos a Arduino que usaremos el pin 8 como salida (para el del buzzer)
pinMode(9,INPUT);// le decimos a Arduino que usaremos el pin 9 como entrada (para el botón)
noTone(8); // nos aseguramos que no haya ningún sonido en el buzzer
}
void loop() {
// vamos a leer el estado del botón usando la función digitalRead
// y también usaremos una estructura de código llamada “if” o condicional
if (digitalRead(9)==HIGH) { // Si en el pin 9 hay una señal HIGH es que se presionó el botón
tone(8,294,110); // por lo tanto hay que reproducir el sonido por 100 milisegundos
}
}
