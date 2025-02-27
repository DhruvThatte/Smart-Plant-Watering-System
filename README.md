#Smart Plant Watering System using ESP32  

## 📌 Overview  
The **Smart Plant Watering System** is an IoT-based project designed to automate plant irrigation based on **soil moisture levels**. It uses an **ESP32 microcontroller**, **soil moisture sensor**, and a **water pump** to ensure plants receive the right amount of water. The system integrates with **Blynk IoT** for remote monitoring and control.  

This project is **ideal for home gardens, greenhouses, and agricultural applications**, ensuring water conservation and optimal plant growth.  

---

## 🛠 Features  
✅ **Automated Watering** – Waters plants when soil moisture is low.  
✅ **IoT Connectivity** – Connects to the **Blynk** app for remote monitoring.  
✅ **Wi-Fi Enabled** – Sends real-time data to the cloud.  
✅ **Manual Watering Mode** – Control the pump via the **Blynk mobile app**.  
✅ **Soil Moisture Monitoring** – Provides real-time sensor data.  
✅ **Energy Efficient** – Runs only when needed to save power.  

---

## 🖥️ Tech Stack  
🔹 **Microcontroller:** ESP32  
🔹 **Sensors:** Soil Moisture Sensor  
🔹 **Actuators:** Water Pump, Relay Module  
🔹 **Connectivity:** Wi-Fi, Blynk IoT  
🔹 **Programming Language:** C++ (Arduino)  

---

## 🏗 Hardware Requirements  
To build this project, you need the following components:  

| Component            | Description                            |  
|--------------------|------------------------------------|  
| ESP32 Dev Board    | The main microcontroller            |  
| Soil Moisture Sensor | Detects soil moisture levels       |  
| Relay Module       | Controls the water pump            |  
| Mini Water Pump    | Pumps water to plants              |  
| Jumper Wires      | For making connections             |  
| Power Supply      | 5V-12V power source for the pump   |  

---

## 🖥 Software Requirements  
Before you proceed, install the following:  

✅ **Arduino IDE** – For programming the ESP32  
✅ **ESP32 Board Package** – Add ESP32 support in Arduino IDE  
✅ **Blynk Library** – Enables cloud communication  

---

## 🚀 Installation & Setup  

### 🔹 Step 1: Clone the Repository  
```bash
git clone https://github.com/yourusername/SmartPlantWatering.git
cd SmartPlantWatering
