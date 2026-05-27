#ifndef SENSOR_MODULE_H
#define SENSOR_MODULE_H

#include <Arduino.h>

void initSensors();
void readAllSensors();

String createTelemetryPacket();

extern float temperature;
extern float humidity;
extern float pressure;
extern float altitude;
extern float accelX;
extern float accelY;
extern float accelZ;

#endif