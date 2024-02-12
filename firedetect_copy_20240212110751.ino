#include <ESP8266WiFi.h>

const int flamePin = D0;
const int buzzPin = D1;

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int flameValue = digitalRead(flamePin);
  
  if (flameValue == LOW) {
    Serial.println("Fire detected");
    digitalWrite(buzzPin, HIGH); // Turn on the buzzer
  } else {
    digitalWrite(buzzPin, LOW); // Turn off the buzzer
  }
  
  delay(1000); // Adjust delay as needed
}
