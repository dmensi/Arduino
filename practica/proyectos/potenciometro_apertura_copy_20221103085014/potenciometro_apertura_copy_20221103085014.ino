// these constants won't change:
const int analogPin = A0;   // coneccion pot
const int ledCont = 12;    // contador de led

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12,13
};   // arreglo para prender 


void setup() {
  // loop over the pin array and set them all to output:
  for (int Led = 0; Led < ledCont; Led++) {
    pinMode(ledPins[Led], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // read the potentiometer:
  int sensorReading = analogRead(analogPin);
  // map the result to a range from 0 to the number of LEDs:
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCont);

  // loop over the LED array:
  for (int Led = 0; Led < ledCont; Led++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
    if (Led < ledLevel) {
      digitalWrite(ledPins[Led], HIGH);
    }
    // turn off all pins higher than the ledLevel:
    else {
      digitalWrite(ledPins[Led], LOW);
    }
  }
}