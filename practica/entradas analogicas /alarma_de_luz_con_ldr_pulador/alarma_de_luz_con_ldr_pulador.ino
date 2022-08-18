


const int sensorLDR = 0; //pin analógico
const int led = 2; //asigno pines digitales de led, altavoz y boton
const int altavoz = 8;
const int boton = 7;

int nivelalarma = 650; //Ajusta este valor en función de tu LDR y la luminosidad, habilita el monitor serie para ver el valor de la lectura
int nivelLuz; //Definimos una variable para almacenar el valor de la LDR
int estadoboton; //Variable para almacenar el estado del botón
int disparoalarma = 0;

void parpadeoled(int dur) //defino una subrutina de parpadeo del LED con una duración dur
{
  digitalWrite(led, HIGH); //encendemos el LED
  delay(dur);
  digitalWrite(led, LOW);
  delay(dur);
}

void setup()
{
  pinMode(led, OUTPUT); //declaro pines led y altavoz de salida, y boton de entrada
  pinMode(altavoz, OUTPUT);
  digitalWrite(altavoz, 0);
  pinMode(boton, INPUT);
  //configuramos el puerto serie para poder comunicarnos con Arduino mediante el cable USB para ver el valor de la LDR, después se puede quitar
  Serial.begin (9600);
}

void loop()
{
  if (disparoalarma == 1) //si la alarma se ha disparado con anterioridad
  {
    parpadeoled(1000);
  }
  estadoboton = digitalRead(boton);
  if (estadoboton == LOW) // Si el botón 1 está BAJO (0V), es decir, pulsado, el sistema resetea la memoria del disparo de la alarma anterior, parpadea 3 veces, y vuelve a comprobar el botón
  {
    disparoalarma = 0;
    parpadeoled(300);
    parpadeoled(300);
    parpadeoled(300);
    estadoboton = digitalRead(boton);
    if (estadoboton == LOW) // Si el botón 1 sigue estando BAJO, es decir, pulsado, el sistema deshabilita la alarma durante 60 segundos y avisa del principio y final con un parpadeo corto
    { parpadeoled(5000);
      delay(50000);
      parpadeoled(5000);
    }
  } else {
    nivelLuz = analogRead(sensorLDR);  //leemos el valor en la LDR
    Serial.println(nivelLuz); //enviamos el valor al puerto serial, este comando se puede eliminar una vez probado el montaje
    if (nivelLuz < nivelalarma) //si el nivel de luz recibido es menor del nivel establecido
    {
      tone(altavoz, 392, 2000); //hacemos sonar el altavoz
      delay(3000);
      disparoalarma = 1;
    }
  }
}
