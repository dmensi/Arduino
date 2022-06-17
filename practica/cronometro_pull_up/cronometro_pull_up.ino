
unsigned long inicio, fin, tiempo;
boolean contando;


void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT); // Led que nos indica si esta contando
  pinMode(2, INPUT); // Boton de cominezo
  digitalWrite(2, HIGH); // se activa la resistencia de pull up
  pinMode(3, INPUT); // boton de finalización
  digitalWrite(3, HIGH); // se activa la resistencia de pull up
  Serial.println ("Botón 1 para iniciar y 2 para terminar"); 
  contando = false;
}
void resultados(){
  float h, m, s, ms;
  unsigned long over;
  tiempo = fin - inicio;
  h = int(tiempo / 3600000);
  over = tiempo % 3600000;
  m = int(over / 60000);
  over = over % 60000;
  s = int(over / 1000);
  ms = over % 1000;
  Serial.print("Tiempo trancurrido en lilis: ");
  Serial.println(tiempo);
  Serial.print("Tiempo transcurrido: ");
  Serial.print(h, 0);
  Serial.print("h ");
  Serial.print(m, 0);
  Serial.print("m ");
  Serial.print(s, 0);
  Serial.print("s ");
  Serial.print(ms, 0);
  Serial.println("ms ");
  Serial.println();
}
void loop() {
  if (digitalRead(2) == LOW){  // ESTAMOS EN PULL-UP
    if(contando){
      Serial.println("Ya hemos comenzado ");
      digitalWrite(4,HIGH);
    }else{
      contando = true;
      inicio = millis();
      delay(200); // por seguridad
      Serial.println("Empezamos...");
    }
  }
  if(digitalRead(3) == LOW){  // ESTAMOS EN PULL-UP
    if(contando){
      digitalWrite(4,LOW);
      contando = false;
      fin = millis();
      delay(200); // por seguridad
      resultados();  
    }else{
      Serial.println("Pulse comenzar antes de finalizar...");
    }
  }
}
