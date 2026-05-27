#include "sensor_module.h"
#include "config.h"

#include <Wire.h>
#include <DHT.h>
#include <Adafruit_BMP280.h>
#include <MPU6050.h>

DHT dht(DHTPIN, DHTTYPE);
Adafruit_BMP280 bmp;
MPU6050 mpu;

float temperature = 0;
float humidity = 0;
float pressure = 0;
float altitude = 0;
float accelX = 0;
float accelY = 0;
float accelZ = 0;

void initSensors()
{
    dht.begin();

    if (!bmp.begin(0x76))
    {
        Serial.println("BMP280 not detected");
    }

    Wire.begin();
    mpu.initialize();

    Serial.println("Sensors Initialized");
}

void readAllSensors()
{
    temperature = dht.readTemperature();
    humidity = dht.readHumidity();

    pressure = bmp.readPressure() / 100.0F;
    altitude = bmp.readAltitude(1013.25);

    int16_t ax, ay, az;
    mpu.getAcceleration(&ax, &ay, &az);

    accelX = ax;
    accelY = ay;
    accelZ = az;
}

String createTelemetryPacket()
{
    String packet = "";

    packet += "TEMP:";
    packet += String(temperature);

    packet += ",HUM:";
    packet += String(humidity);

    packet += ",PRESS:";
    packet += String(pressure);

    packet += ",ALT:";
    packet += String(altitude);

    packet += ",AX:";
    packet += String(accelX);

    packet += ",AY:";
    packet += String(accelY);

    packet += ",AZ:";
    packet += String(accelZ);

    return packet;
}