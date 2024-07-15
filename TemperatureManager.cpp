#include "TemperatureManager.h"

TemperatureManager::TemperatureManager(uint8_t pin)
  : dht(pin, DHT11) {}

void TemperatureManager::begin() {
  dht.begin();
}

float TemperatureManager::getTemperature() {

  float temperature = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");

  return temperature;
}

float TemperatureManager::getHumidity() {

  float humidity = dht.readHumidity();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  
  return humidity;
}
