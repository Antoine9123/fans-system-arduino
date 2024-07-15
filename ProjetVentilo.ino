#include <DHT.h>
#include "TemperatureManager.h"
#include "FenceManager.h"

#define DHT_PIN 2
#define RELAY_PIN 4

#define DELAY_CYCLE 5000

FenceManager fenceManager(RELAY_PIN);
TemperatureManager tempManager(DHT_PIN);

void setup() {
  Serial.begin(9600);

  tempManager.begin();
  fenceManager.begin();
}

void loop() {
  Serial.println("\nENVIRONEMENT \t--------------------------------------------------------");
  float temperature = tempManager.getTemperature();
  float humidity = tempManager.getHumidity();

  Serial.println("\nFENCE PROCESS \t--------------------------------------------------------");
  fenceManager.fenceProcess(temperature);


  delay(DELAY_CYCLE);
}
