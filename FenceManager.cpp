#include "FenceManager.h"

FenceManager::FenceManager(uint8_t pin)
  : relayPin(pin), isActive(false) {}

void FenceManager::begin() {
  pinMode(relayPin, OUTPUT);
  StopFence();
}

void FenceManager::fenceProcess(float temperature) {
  if (temperature >= TEMP_MAX && !isActive) {
    Serial.println("Starting fence...");
    StartFence();
  } else if (temperature <= TEMP_MIN && isActive) {
    Serial.println("Stopping fence...");
    StopFence();
  } else {
    Serial.print("System stable. IsActive = ");
    Serial.println(isActive ? "true" : "false");
  }
}

void FenceManager::StartFence() {
  digitalWrite(relayPin, HIGH);
  isActive = true;
}

void FenceManager::StopFence() {
  digitalWrite(relayPin, LOW);
  isActive = false;
}

bool FenceManager::getStatus() const {
  return isActive;
}
