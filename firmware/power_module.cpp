#include "power_module.h"
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

void initPowerMonitor()
{
    ina219.begin();

    Serial.println("Power Monitor Initialized");
}