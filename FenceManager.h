#ifndef FENCE_MANAGER_H
#define FENCE_MANAGER_H

#include <Arduino.h>

#define TEMP_MAX 26.00
#define TEMP_MIN 25.80

class FenceManager {
public:
    FenceManager(uint8_t pin); 
    void begin(); 
    bool getStatus() const; 
    void fenceProcess(float temperature); 

private:
    uint8_t relayPin;
    bool isActive; 
    void StartFence();
    void StopFence(); 
};

#endif 
