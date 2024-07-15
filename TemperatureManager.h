#ifndef TEMPERATUREMANAGER_H
#define TEMPERATUREMANAGER_H

#include "DHT.h"

class TemperatureManager {
public:
    TemperatureManager(uint8_t pin);
    void begin();
    float getTemperature();
    float getHumidity();

private:
    DHT dht;
};

#endif
