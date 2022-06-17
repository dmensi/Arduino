int sensor;  // Para guardar el valor de A0
float temperatura;
void setup(){
  Serial.begin(9600);
}
void loop(){
  sensor = analogRead(A0);
  temperatura = ((sensor * 5000.0) / 1023) / 10;
  Serial.print(temperatura, 2); // Con un solo decimal
  Serial.println(" C");
  delay(1000);
}
