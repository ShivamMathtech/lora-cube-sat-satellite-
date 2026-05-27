#include "gps_module.h"
#include <HardwareSerial.h>

HardwareSerial GPS(1);

void initGPS()
{
    GPS.begin(9600, SERIAL_8N1, 3, 1);

    Serial.println("GPS Initialized");
}