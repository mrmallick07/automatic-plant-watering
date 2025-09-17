# Arduino Automatic Plant Watering System 🌱💧

This project is an **Arduino-based automatic plant watering system** that monitors soil moisture and automatically controls a water pump. It also displays real-time status on a 16×2 I²C LCD.

---

## 📋 Project Details
- **Name:** Hannan Ali Mallick  
- **College:** Department of Physics, Uluberia College  
- **Supervisor:** Dr. Pradip Kumar Mondal, Assistant Professor  
- **Semester:** 4th (SEC B1)  

---

## 🎯 Objective
The goal is to design and develop a smart irrigation system that can:
- Monitor soil moisture levels in real time
- Automatically water plants when soil moisture falls below a set threshold
- Conserve water and reduce manual labor
- Display pump status and moisture level on an LCD

---

## 🛠️ Components Used
- Arduino Nano (ATmega328)
- Soil moisture sensor
- Relay module
- 5V water pump
- 16×2 I²C LCD display
- Connecting wires
- Power supply for the water pump

---

## ⚡ Circuit Connections
- **Soil Moisture Sensor:** VCC → 5V, GND → GND, A0 → A0  
- **Relay Module:** VCC → 5V, GND → GND, IN → D2, COM & NO → water pump circuit  
- **LCD (I²C):** GND → GND, VCC → 5V, SDA → A4, SCL → A5  

*(Upload an image of your circuit diagram here)*

---

## 💻 Arduino Code
See [`automatic_plant_watering.ino`](automatic_plant_watering.ino) for the full sketch.

---

## 📝 Observations
- **Sensor behavior:** High value for dry soil, low for wet soil  
- **Relay activation:** Pump turns on automatically when soil is dry  
- **LCD output:** Displays “Pump ON/OFF” and moisture level HIGH/MID/LOW  

---

## ✅ Advantages
- Conserves water  
- Fully automated  
- Promotes plant health  
- Low cost and energy efficient  
- Easily customizable and scalable  

## ⚠️ Limitations
- Needs some wiring/coding knowledge to set up  
- Depends on power supply  
- Moisture sensors may degrade over time  

---

## 📚 References
- [Arduino Reference](https://www.arduino.cc/en/Reference/HomePage)  
- [Soil Moisture Sensor Tutorial](https://lastminuteengineers.com/soil-moisture-sensor-arduino-tutorial/)  
- [Relay Module Guide](https://randomnerdtutorials.com/guide-for-relay-module-with-arduino/)  
- [16×2 LCD with Arduino](https://www.circuitbasics.com/how-to-set-up-an-lcd-display-on-an-arduino/)  
- [Automatic Plant Watering on Instructables](https://www.instructables.com/Automatic-Plant-Watering-System-Using-Arduino/)  

---

## 🎥 Demo
*(Optional: add a photo or link to a video of your system in action)*

---

## 📜 License
This project is for educational purposes.
