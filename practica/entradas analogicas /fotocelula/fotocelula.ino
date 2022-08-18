

int rojo = 8;
int valor = A0;
void setup(){
    pinMode(rojo, OUTPUT);          // led rojo - pin de salida  
    Serial.begin(9600);
} 
  
void loop() { // bucle infinito     

    if (analogRead(valor)<200){             // si ldr < 200   
        digitalWrite(rojo, HIGH);          // enciende el led
    }
    else {
         digitalWrite(rojo, LOW);         // si no apaga el led
   } 
    Serial.println(valor);           
}
