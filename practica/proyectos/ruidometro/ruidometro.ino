//ruidometro modulo KY-038
int pin_A0 = A5;
int pin_D0 = 8;

// pines  del 
int pin_led_r = 11;
int pin_led_a = 10;
int pin_led_v = 9;


//Definimos variables
int valor_A0 = 0;
int valor_D0 = 0;

void setup()
{
  Serial.begin(9600);
  // modulo KY-038 
  pinMode(pin_A0, INPUT);
  pinMode(pin_D0, INPUT);
  //D KY-016 salida rgb 
  pinMode(pin_led_r, OUTPUT);
  pinMode(pin_led_a, OUTPUT);
  pinMode(pin_led_v, OUTPUT);
}

void loop()
{
  valor_A0 = analogRead(pin_A0);
  valor_D0 = digitalRead(pin_D0);
  //serie
  Serial.print("Valor ruido: ");
  Serial.print(valor_A0);
  Serial.print(" Valor entrada: ");
  Serial.println(valor_D0);

  //ruido bajo
  if (valor_A0 < 100)
  {
    digitalWrite(pin_led_v, HIGH);
    digitalWrite(pin_led_r, LOW);
    digitalWrite(pin_led_a, LOW);
  }
  //medio
  if (valor_A0 >= 101 && valor_A0 < 310)
  {
    digitalWrite(pin_led_v, LOW);
    digitalWrite(pin_led_a, HIGH);
    digitalWrite(pin_led_r, LOW);
  }
  //ruido alto 
  if (valor_A0 > 310)
  {
    digitalWrite(pin_led_v, LOW);
    digitalWrite(pin_led_a, LOW);
    digitalWrite(pin_led_r, HIGH);
  }
  delay(100);
  //off led
  digitalWrite(pin_led_v, LOW);
  digitalWrite(pin_led_a, LOW);
  digitalWrite(pin_led_r, LOW);
}
