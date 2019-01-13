/*
  monitor_request.ino

  Read the temperature and humidity from a DHT22 sensor on request from serial.
  Report the information over serial.

  Circuit:
  * DHT22 data pin to digital pin 7
  * DHT pin 1 to +5V
  * DHT pin 4 to GROUND

  Dependencies:
  * My version of the Adafruit DHT library.
  * The Adafruit UnifiedSensor library.
 */

#include "DHT.h"

// initialize the DHT sensor
DHT dht(7, DHT22);

void setup() {
    dht.begin();

    Serial.begin(9600);

}

void loop() {

    if (Serial.available() > 0) {
        char command = Serial.read();
        switch (command) {
        case 'r':

            float humidity = dht.readHumidity();
            float temperature = dht.readTemperature();
            String report = String(temperature);
            report += ":";
            report += String(humidity);
            Serial.println(report);
            break;

        }

    }
}