void setup() {
  // put your setup code here, to run once:
  pinMode (3,OUTPUT); // pin 3 salida.
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,LOW); //lo ponemos en modo  bajo o apagado
  delay(5000);

  digitalWrite(3,HIGH); // lo ponemos en modo alto o prendido
  delay(500);

}
