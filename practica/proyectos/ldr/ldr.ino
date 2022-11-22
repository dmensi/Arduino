void setup(){
  pinMode(A0,INPUT);                 
  pinMode(4,OUTPUT);               
  Serial.begin(9600);               
} 
 
void loop(){
  int valorLDR = analogRead(A0);                
     
    if( valorLDR <= 400 ) 
    {
      digitalWrite(4, HIGH);
      Serial.print("LED ON ");
      Serial.println(valorLDR);
      delay(500);
    }
  
    else
    {
      digitalWrite(4, LOW);
      Serial.println("LED OFF");
      Serial.println(valorLDR);
      delay(500);
    }
  } 
