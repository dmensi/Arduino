


const int ledPin = 13;

const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 10) {

digitalWrite(ledPin, HIGH);

Serial.print(" Es BRILLANTE, apague el LED : ");

Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, LOW);

Serial.print("no se ve na prendan la luz  : ");

Serial.println(ldrStatus);

}

}
