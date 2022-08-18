
/////a ver 2 intento 

int tiempoCruce = 5000;
int rojo=13;
int amarillo=12;
int verde=11;
int zumba=10;
//semaforo para peatones
int projo= 9; // peatones rojo
int pverde=8; // peatones verde
int pulsador=7;
unsigned long tiempoCambio = 0;
 
void setup(){
  // semaforo coches
  pinMode(rojo, OUTPUT);  // rojo
  pinMode(amarillo, OUTPUT);   // amarillo
  pinMode(verde, OUTPUT);   // verde
  // semáforo peatones
  pinMode(projo, OUTPUT);   // peatones rojo
  pinMode(pverde, OUTPUT);   // peatones verde
  pinMode(pulsador, INPUT);    // pulsador, cambio de color
  pinMode(zumba,OUTPUT);       // salida parlante
  digitalWrite(verde, HIGH);    // iniciamos con el verde encendido, coche
  digitalWrite(projo, HIGH);    // iniciamos con el rojo encendido, peatón
}
void loop() {
 int estado = digitalRead(pulsador);
 if (estado == LOW && (millis() - tiempoCambio) > 5000 ){
  cambioLuz();
 }
}
void cambioLuz() {
  digitalWrite(verde,LOW);    // verde apagado, coche
  digitalWrite(amarillo, HIGH);  // amarillo encendido, coche
  delay(2000);
  
  digitalWrite(amarillo, LOW);   // amarillo apagado, coche
  digitalWrite(rojo, HIGH); // rojo encendido, coche
  delay(1000);
  
  digitalWrite(projo, LOW);   // rojo apagado, peatón
  digitalWrite(pverde, HIGH);  // verde encendido, peatón
  delay(tiempoCruce);
  // parpadeo de la luz verde del peatón
  for (int x=0; x < 10; x++) {
    digitalWrite(pverde, HIGH);
    delay(250);
    digitalWrite(pverde, LOW);
    delay(250);
  }

   digitalWrite(rojo, LOW);    // rojo apagado, coche
   digitalWrite(verde, HIGH);    // verde encendido, coche
  
  digitalWrite(projo, HIGH);    // rojo encendido, peatón
  delay(500);
 
  for (int i=0; i<3; i++){           // bucle que se repite 5 veces
       digitalWrite(zumba, HIGH);    // sonido
       delay(200);                      // pausa
       digitalWrite(zumba, LOW);     // silencio 
       delay(2000);                      // pausa
    }
  int estado = LOW;
  cambioLuz();
  
  tiempoCambio = millis();
}
