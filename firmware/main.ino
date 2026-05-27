#include "config.h"
#include "sensor_module.h"
#include "lora_module.h"
#include "gps_module.h"
#include "camera_module.h"
#include "power_module.h"

unsigned long lastTelemetry = 0;

void setup()
{
    Serial.begin(115200);

    Serial.println("================================");
    Serial.println(" AstraCube-X CubeSat Booting");
    Serial.println("================================");

    initSensors();
    initLoRa();
    initGPS();
    initCamera();
    initPowerMonitor();

    Serial.println("All systems initialized");
}

void loop()
{
    readAllSensors();

    String telemetry = createTelemetryPacket();

    sendLoRaPacket(telemetry);

    Serial.println("Telemetry Sent:");
    Serial.println(telemetry);

    captureImage();

    delay(5000);
}