#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "sensors.cpp"

// Initialize LCD display
LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 columns, 2 rows

void setup() {
  lcd.begin(16, 2);
  lcd.print("Weather Station");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature = readTemperature();
  float humidity = readHumidity();
  float pressure = readPressure();

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  delay(5000);
}
