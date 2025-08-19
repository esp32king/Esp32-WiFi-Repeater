# Wi-Fi Repeater Projects for ESP32 & ESP8266

This repository contains simple Wi-Fi repeater projects using **ESP32** and **ESP8266**. Both boards can connect to an existing Wi-Fi network and create their own AP to share the connection.

---

## **ESP32 Wi-Fi Repeater**

A simple ESP32 project that allows your ESP32 to act as a Wi-Fi repeater.

### Features
- Connects to a source Wi-Fi network (STA mode)
- Creates a Repeater AP (SoftAP mode)
- Devices connected to the ESP32 AP get internet access
- Easy to configure in Arduino IDE

### Requirements
- ESP32 Board
- Arduino IDE
- WiFi library (built-in)

### Installation
1. Clone or download this repository.
2. Open `ESP32_WiFi_Repeater.ino` in Arduino IDE.
3. Update your source Wi-Fi credentials:
   ```cpp
   const char* sourceSSID = "Your_Source_WiFi";
   const char* sourcePassword = "Your_WiFi_Password";
