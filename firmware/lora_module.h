#ifndef LORA_MODULE_H
#define LORA_MODULE_H

#include <Arduino.h>

void initLoRa();
void sendLoRaPacket(String data);

#endif