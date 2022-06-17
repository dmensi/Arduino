
int estadoBoton=1; //Guardará el estado del botón (HIGH ó LOW)
int led =4;
int boton=8;
void setup(){
  pinMode(led,OUTPUT);      //Donde está conectado el LED
  pinMode(boton,INPUT); ;    //Pin donde está conectado el pulsador
  Serial.begin(9600);
}
void loop() {
  estadoBoton=digitalRead(8);
  if (estadoBoton==HIGH){
   
  Serial.print("encedido " ); 
  Serial.println(estadoBoton);
  digitalWrite(led,HIGH);
    
    delay (100);   //Para mayor estabilidad entre lecturas
}
else {
  Serial.print("apagado " ); 
  Serial.println(estadoBoton);
  digitalWrite(led,LOW);
  delay (100);
}
}
