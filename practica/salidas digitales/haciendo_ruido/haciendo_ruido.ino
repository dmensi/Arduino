// Haciendo Ruido
void setup() {
// le decimos al Arduino que usarmos el pin 8 como salida
pinMode(8,OUTPUT);
}
void loop() {
// usamos la función tone, que emite un sonido en el pin 8, con la frecuencia 264
tone(8,234);
// Esperamos 1 segundo
delay(1000);
// emitimos otro sonido
tone(8,304);
delay(1000);
// dejamos de emitir sonido
noTone(8);
delay(2000);
}
