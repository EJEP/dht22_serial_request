# DHT22 serial request #

This is a small arduino sketch to read the temperature and humidity from a DHT22 sensor when requested over serial.

## Requirements ##

The directories are set up for [PlatformIO][https://platformio.org/] rather than the default arduino IDE. The code will work fine with the default IDE though.

+ The Adafruit UnifiedSensor [library][https://github.com/adafruit/Adafruit_Sensor]
+ The Adafruit [DHT-sensor-library][https://github.com/adafruit/DHT-sensor-library]

Note that there is an error with the init sequence in the Adafruit [DHT-sensor-library][https://github.com/adafruit/DHT-sensor-library]. This is discussed in a [bug report][https://github.com/adafruit/DHT-sensor-library/issues/48].

## Usage ##

When the character `r` is received by the arduino over serial communication, a string containing the temperature and humidity is sent back over serial.
