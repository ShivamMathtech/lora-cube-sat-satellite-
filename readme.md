---
noteId: "1930875059a611f182007bde1f10d81e"
tags: []

---

# 🚀 AstraCube-X
## AI-Enabled CubeSat Satellite using ESP32-CAM & LoRa

![CubeSat Banner](images/cubesat_design.png)

An advanced educational CubeSat platform powered by ESP32-CAM, LoRa communication, GPS telemetry, onboard imaging, environmental monitoring sensors, and IoT cloud integration.

AstraCube-X simulates a real-world nanosatellite system used in aerospace telemetry, remote sensing, wireless communication, and embedded IoT applications.

---

# 🌍 Project Overview

AstraCube-X is a compact CubeSat-inspired embedded system developed for:

- Aerospace education
- CubeSat research
- Remote sensing
- IoT telemetry
- Long-range communication
- AI-enabled edge systems
- Environmental monitoring
- Embedded systems engineering
- Satellite communication experiments

The project combines an ESP32-CAM flight controller with LoRa telemetry, GPS tracking, environmental sensors, and cloud dashboards to create a fully functional educational satellite simulation system.

---

# 🛰 Key Features

## Core Features

- 📷 ESP32-CAM onboard imaging system
- 📡 Long-range LoRa telemetry communication
- 🌡 Environmental monitoring system
- 🌍 GPS tracking and positioning
- 📊 Real-time telemetry dashboard
- ☁ Cloud IoT integration
- 🔋 Solar-powered architecture support
- 📈 Telemetry data logging
- 🧠 AI-ready TinyML platform
- 🛰 CubeSat-inspired modular structure
- 🔌 Battery and power monitoring
- 📡 Ground station communication support

---

# 🧩 Hardware Components

| Component | Purpose |
|---|---|
| ESP32-CAM | Main flight controller |
| SX1278 / Ra-02 | LoRa communication |
| BMP280 | Pressure & altitude |
| DHT22 | Temperature & humidity |
| MPU6050 | Motion & orientation |
| NEO-6M GPS | Position tracking |
| INA219 | Power monitoring |
| OLED Display | Local telemetry display |
| TP4056 | Battery charging module |
| 18650 Battery | Portable power |
| Solar Panel | Renewable energy |
| MQ135 | Air quality monitoring |
| BH1750 | Light intensity monitoring |
| UV Sensor | UV index measurement |

---

# 🛰 CubeSat Architecture

```text
+------------------------------------------------+
|                AstraCube-X                     |
|------------------------------------------------|
| ESP32-CAM Flight Controller                    |
|                                                |
| ├── LoRa Communication System                  |
| ├── Camera Imaging System                      |
| ├── Environmental Sensor Array                 |
| ├── GPS Tracking Module                        |
| ├── Motion & Orientation System                |
| ├── Power Monitoring System                    |
| └── IoT Cloud Telemetry                        |
+------------------------------------------------+
```

---

# 📡 Communication Workflow

```text
Environmental Sensors
        ↓
ESP32-CAM Flight Controller
        ↓
LoRa Telemetry Transmission
        ↓
Ground Station Receiver
        ↓
Cloud Dashboard & Analytics
```

---

# 📷 CubeSat Functional Workflow

```text
Sensors → ESP32-CAM → Data Processing → LoRa Module
                                      ↓
                               Ground Station
                                      ↓
                             IoT Cloud Dashboard
```

---

# ⚙ ESP32-CAM Pin Connections

## SX1278 LoRa ↔ ESP32-CAM

| SX1278 LoRa | ESP32-CAM |
|---|---|
| MISO | GPIO12 |
| MOSI | GPIO13 |
| SCK | GPIO14 |
| NSS (CS) | GPIO15 |
| RST | GPIO2 |
| DIO0 | GPIO16 |
| GND | GND |
| VCC | 3.3V |

---

# 🌡 Sensor Connections

## DHT22

| DHT22 | ESP32 |
|---|---|
| DATA | GPIO4 |
| VCC | 3.3V |
| GND | GND |

## BMP280

| BMP280 | ESP32 |
|---|---|
| SDA | GPIO21 |
| SCL | GPIO22 |
| VCC | 3.3V |
| GND | GND |

## MPU6050

| MPU6050 | ESP32 |
|---|---|
| SDA | GPIO21 |
| SCL | GPIO22 |
| VCC | 3.3V |
| GND | GND |

---

# 🔋 Power Architecture

## Power Components

- 18650 Li-ion Battery
- TP4056 Charging Module
- 5V Solar Panel
- 3.3V Voltage Regulator
- INA219 Power Monitor

## Power Flow

```text
Solar Panel → TP4056 Charger → Battery → Voltage Regulator → ESP32-CAM
```

---

# ☁ IoT Cloud Integration

Supported cloud platforms:

- MQTT
- Firebase
- Blynk
- Node-RED
- ThingsBoard
- AWS IoT
- Grafana

---

# 📊 Telemetry Parameters

| Parameter | Description |
|---|---|
| Temperature | Environmental temperature |
| Humidity | Atmospheric humidity |
| Pressure | Atmospheric pressure |
| Altitude | Height estimation |
| GPS Coordinates | Position tracking |
| Battery Voltage | Power health |
| Current Consumption | System power usage |
| Signal Strength | Communication quality |
| Motion Data | Satellite orientation |
| UV Index | UV monitoring |
| Air Quality | Atmospheric quality |

---

# 📡 Example Telemetry Packet

```txt
TEMP:28.5,HUM:61.2,PRESS:1008.3,ALT:124.5,AX:23,AY:10,AZ:16384
```

---

# 📂 Project Structure

```text
AstraCube-X/
│
├── firmware/
│   ├── main.ino
│   ├── config.h
│   ├── sensor_module.cpp
│   ├── sensor_module.h
│   ├── lora_module.cpp
│   ├── lora_module.h
│   ├── gps_module.cpp
│   ├── gps_module.h
│   ├── camera_module.cpp
│   ├── camera_module.h
│   ├── power_module.cpp
│   └── power_module.h
│
├── images/
│   ├── cubesat_design.png
│   ├── block_diagram.png
│   ├── telemetry_dashboard.png
│   └── communication_workflow.png
│
├── docs/
│   ├── architecture.md
│   ├── research_paper.pdf
│   └── presentation.pptx
│
├── hardware/
│   ├── pcb_design/
│   ├── schematics/
│   └── 3d_model/
│
└── README.md
```

---

# 💻 Firmware Features

## Current Features

- Sensor data acquisition
- LoRa telemetry transmission
- Camera image capture
- GPS tracking
- Altitude estimation
- Motion monitoring
- Power monitoring
- Serial debugging
- Real-time telemetry output

---

# 🧠 AI Integration Possibilities

Future AI enhancements:

- TinyML anomaly detection
- Edge AI image processing
- Weather prediction
- Autonomous telemetry optimization
- AI-based power management
- Object detection from aerial imagery
- Smart communication scheduling

---

# 📷 Imaging System

The ESP32-CAM onboard camera enables:

- Earth observation simulation
- Remote sensing
- Time-lapse photography
- Aerial monitoring
- Experimental image telemetry

---

# 🛰 Ground Station

Ground station can be developed using:

- ESP32 + LoRa
- Raspberry Pi
- Arduino + SX1278
- SDR systems
- Laptop-based telemetry receiver

## Ground Station Features

- Receive telemetry packets
- Display live data
- GPS tracking visualization
- Signal monitoring
- Cloud synchronization
- Telemetry logging

---

# 🔧 Installation Guide

## 1. Clone Repository

```bash
git clone https://github.com/ShivamMathtech/lora-cube-sat-satellite-.git
```

---

## 2. Install Arduino IDE

Download:

https://www.arduino.cc/en/software

---

## 3. Install Required Libraries

Install the following libraries:

```text
WiFi.h
SPI.h
LoRa.h
Wire.h
TinyGPS++.h
Adafruit_BMP280.h
DHT.h
MPU6050.h
Adafruit_INA219.h
esp_camera.h
```

---

## 4. Select Board

```text
Board: AI Thinker ESP32-CAM
```

---

## 5. Upload Firmware

Connect FTDI programmer and upload the firmware.

---

# 🔋 Power Consumption

Estimated operating power:

| Module | Current |
|---|---|
| ESP32-CAM | 180mA |
| LoRa Module | 120mA |
| Sensors | 40mA |
| GPS Module | 35mA |
| OLED Display | 20mA |

Estimated total:

```text
~395mA Average Consumption
```

---

# 📐 CubeSat Dimensions

Standard 1U CubeSat dimensions:

```text
10 cm × 10 cm × 10 cm
```

---

# 🚀 Applications

- Aerospace education
- CubeSat research
- IoT telemetry systems
- Environmental monitoring
- High-altitude balloon payloads
- Remote sensing
- Amateur satellite communication
- Wireless communication experiments
- Edge AI research
- Embedded systems learning

---

# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| ESP32-CAM | Embedded controller |
| Arduino Framework | Firmware development |
| LoRa | Long-range communication |
| MQTT | Cloud communication |
| Firebase | Backend telemetry |
| Node-RED | Dashboard visualization |
| TinyML | Edge AI |
| Grafana | Telemetry visualization |

---

# 📈 Future Scope

Possible future improvements:

- Reaction wheel stabilization
- Deployable antenna system
- AES encrypted telemetry
- Satellite swarm communication
- Autonomous mission scheduler
- Solar tracking system
- Mesh satellite networking
- Real orbital telemetry systems
- SDR communication integration

---

# 🌍 Real-World Inspiration

Inspired by:

- NASA CubeSat missions
- Educational nanosatellites
- TinyGS LoRa ground stations
- Amateur satellite systems
- IoT remote sensing platforms
- Aerospace telemetry systems

---

# 🤝 Contributing

Contributions are welcome.

You can contribute by:

- Improving firmware
- Adding sensors
- Building dashboards
- Designing PCBs
- Enhancing telemetry
- Creating AI modules
- Optimizing power systems

---

# 📜 License

MIT License

---

# 👨‍💻 Author

## Shivam Singh
Founder — MathTech

Passionate about:

- Aerospace Engineering
- Embedded AI
- CubeSat Technology
- Robotics
- IoT Systems
- Edge Computing
- Wireless Communication

---

# 🌟 Support the Project

If you like this project:

⭐ Star the repository
🍴 Fork the project
📡 Build your own CubeSat
🚀 Share with the community

---

# 🔗 Repository Link

https://github.com/ShivamMathtech/lora-cube-sat-satellite-.git

---

# 🚀 AstraCube-X Vision

AstraCube-X aims to make CubeSat technology accessible for studen