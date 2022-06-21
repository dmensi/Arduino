
const int PIN=12;

void setup() {
  // put your setup code here, to run once:
  pinMode (PIN,OUTPUT); // pin 3 salida.
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN,LOW); //lo ponemos en modo  bajo 
  delay(5000);

  digitalWrite(PIN,HIGH); // lo ponemos en modo alto
  delay(500);

}
