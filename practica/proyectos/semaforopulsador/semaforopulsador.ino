/***   Included libraries  ***/


/***   Global variables and function definition  ***/
const int semaforo_rojo = 12;
const int semaforo_amarillo = 10;
const int semaforo_verde = 8;
const int peaton_verde = 5;
const int peaton_rojo = 6;
const int boton = 7;
int pboton;




/***   Setup  ***/
void setup() {
    pinMode(semaforo_rojo, OUTPUT);
    pinMode(semaforo_amarillo, OUTPUT);
    pinMode(semaforo_verde, OUTPUT);
    pinMode(peaton_verde, OUTPUT);
    pinMode(peaton_rojo, OUTPUT);
    pinMode(boton, INPUT);
    Serial.begin(9600);

    digitalWrite(semaforo_verde, LOW);
    digitalWrite(semaforo_amarillo, LOW);
    digitalWrite(semaforo_rojo, HIGH);
    digitalWrite(peaton_rojo,HIGH);
    digitalWrite(peaton_verde, LOW);
}


/***   Loop  ***/
void loop() {
      pboton=digitalRead(boton);
      Serial.print("encedido " ); 
      Serial.println(pboton);
      delay (100);   //Para mayor estabilidad entre lecturas
      
      if(digitalRead(boton) == 0) {
        digitalWrite(semaforo_verde, LOW);
        digitalWrite(semaforo_amarillo, HIGH);
        digitalWrite(semaforo_rojo, LOW);
        digitalWrite(peaton_rojo, HIGH);
        digitalWrite(peaton_verde, LOW);
        delay(2500);
        digitalWrite(semaforo_rojo, HIGH);
        digitalWrite(semaforo_amarillo, LOW);
        digitalWrite(semaforo_verde, LOW);
        digitalWrite(peaton_rojo, LOW);
        delay(100);
        digitalWrite(peaton_verde, HIGH);
        delay(8000);
        digitalWrite(peaton_verde, LOW);
        digitalWrite(peaton_rojo, HIGH);
        digitalWrite(semaforo_rojo, LOW);
        digitalWrite(semaforo_amarillo, LOW);
        delay(500);
        digitalWrite(semaforo_verde, HIGH);
        delay(5000);
        digitalWrite(semaforo_verde, LOW);
        delay(50);
        
    }

      
     digitalWrite(semaforo_rojo, HIGH);// prendo
    delay(5000);
     digitalWrite(semaforo_rojo, LOW);//apago
      delay (15);
     digitalWrite(semaforo_verde, HIGH);
     delay(5000);
      digitalWrite(semaforo_verde, LOW);
     delay (15);
     digitalWrite(semaforo_amarillo, HIGH);
     delay(2000);
     digitalWrite(semaforo_amarillo, LOW);
     delay (15);
      
  
}
     
