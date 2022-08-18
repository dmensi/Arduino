

int estadoBoton=0; //guarda estado boton
int rojo =13;      //definimos el valor del pin para el led rojo
int amarillo=12;  //definimos el valor del pin para el led amarillo
int verde=11;   //definimos el valor del pin para el led verde
int zumba=10;   //definimos la variable para el zumbador
int boton=8; // definimos entrada pulsador

void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);     //declaramos el pin verde como salida  
  pinMode(amarillo,OUTPUT);  //declaramos el pin amarillo como salida
  pinMode(rojo,OUTPUT);     //declaramos el pin rojo como salida  
  pinMode(zumba,OUTPUT);    //salida zumbador
  pinMode(boton,INPUT);    //entrada pulsador 
  Serial.begin(9600);
  
  }

void loop() {
  // put your main code here, to run repeatedly:

 
 estadoBoton=digitalRead(boton);
 Serial.println(estadoBoton);
 delay(50); //estabilidad para mostrar 
 
 
 digitalWrite(verde,HIGH); //encendemos el led verde
 delay(5000);             //esperamos 5 segundos
 
 
 digitalWrite(verde,LOW);  //apagamos el led verde
 delay(500);              //esperamos medio segundo
 
 digitalWrite(amarillo,HIGH); //encendemos el led amarillo
 delay(2000);                 //esperamos 2 segundos
 digitalWrite(amarillo,LOW);  //apagamos el led amarillo
 delay(500);                  //esperamos medio segundo
 
 digitalWrite(rojo,HIGH); //encendemos el led rojo
 delay(100);              //esperamos 0.1 segundos
  for (int i=0; i<20; i++){           // bucle que se repite 5 veces
       digitalWrite(zumba, HIGH);    // sonido
       delay(300);                      // pausa
       digitalWrite(zumba, LOW);     // silencio 
       delay(3000);                      // pausa
    }
 
 digitalWrite(rojo,LOW); //apagamos el led rojo

}
