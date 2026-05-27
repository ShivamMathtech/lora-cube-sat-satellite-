#include "lora_module.h"
#include "config.h"

#include <SPI.h>
#include <LoRa.h>

void initLoRa()
{
    SPI.begin(LORA_SCK, LORA_MISO, LORA_MOSI, LORA_SS);

    LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);

    if (!LoRa.begin(LORA_BAND))
    {
        Serial.println("LoRa init failed");
        while (1);
    }

    Serial.println("LoRa Initialized");
}

void sendLoRaPacket(String data)
{
    LoRa.beginPacket();
    LoRa.print(data);
    LoRa.endPacket();
}