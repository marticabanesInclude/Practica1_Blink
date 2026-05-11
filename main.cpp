#include <Arduino.h>

#define LED_PIN 48

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);

  delay(1000);
  Serial.println("Inici del programa");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("ON");

  float tempC = temperatureRead();
  Serial.print("Temperatura interna del xip: ");
  Serial.print(tempC);
  Serial.println(" ºC");

  delay(500);

  digitalWrite(LED_PIN, LOW);
  Serial.println("OFF");

  tempC = temperatureRead();
  Serial.print("Temperatura interna del xip: ");
  Serial.print(tempC);
  Serial.println(" ºC");

  delay(500);
}