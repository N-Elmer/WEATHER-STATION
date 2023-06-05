#include <DHT.h>
#include <Adafruit_BMP085.h>

// DHT sensor
#define DHT_PIN 2
#define DHT_TYPE DHT11
DHT dht(DHT_PIN, DHT_TYPE);

// BMP085 sensor
Adafruit_BMP085 bmp;

void setupSensors() {
  dht.begin();
  bmp.begin();
}

float readTemperature() {
  return dht.readTemperature();
}

float readHumidity() {
  return dht.readHumidity();
}

float readPressure() {
  return bmp.readPressure() / 100.0;  // Convert Pa to hPa
}
