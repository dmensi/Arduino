//Variable donde almacenaremos el valor del potenciometro
long valor;

//Declaramos los pins de los LEDs
int LED_1 = 10;
int LED_2 = 11;


void setup() {
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
  //Escribimos por el monitor serie mensaje de inicio
  Serial.println(" - valores del potenciometro");

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  
}

void loop() {
  // leemos del pin A0 valor
  valor = analogRead(A0);

  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
// rango de valores para prender la mitad 
  if(valor >= 0 && valor <=510)
  {
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2, LOW);
      ;
  } 
  
  

 // rango de valores para prender la mitad 

  if (valor >= 511 && valor <=1023)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, HIGH);
   
   }
}