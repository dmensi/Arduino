
int estadoBoton=0;  //Guardará el estado del botón (HIGH ó LOW)
void setup(){
  pinMode(8,INPUT); //Pin donde está conectado el pulsador
  Serial.begin(9600);
}
void loop() {
  estadoBoton=digitalRead(8);
  if (estadoBoton==HIGH){
   
  Serial.print("encedido " ); 
  Serial.println(estadoBoton);
  delay (100);   //Para mayor estabilidad entre lecturas
}
else {
  Serial.print("apagado " ); 
  Serial.println(estadoBoton);
}
}
