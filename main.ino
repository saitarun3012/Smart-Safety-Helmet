# 🪖 Smart Safety Helmet with Integrated Emergency Response System

## 📘 Overview
This project aims to enhance road safety for two-wheeler riders using IoT-based monitoring and emergency response mechanisms.  
The system ensures that a vehicle starts only when the rider wears the helmet, monitors health parameters, and automatically sends alerts in case of an accident or abnormal event.

---

## ⚙ Features
- Helmet detection using IR sensor  
- Engine ignition control via relay  
- Accident detection through tilt sensor  
- Health monitoring using DHT11 (temperature) and pulse sensor  
- Location tracking with GPS  
- Automatic emergency alert via Telegram  
- LCD display for real-time system information  

---

## 🧠 System Block Diagram
![Block Diagram](Project_Report/Block_Diagram.png)

*Components Used:*
- ESP32 microcontroller  
- IR Sensor  
- DHT11 Sensor  
- Tilt Sensor  
- GPS Module  
- LCD Display  
- Relay Module  
- Power Supply  

---

## 🔁 Process Flow
![Process Diagram](Project_Report/Process_Diagram.png)

1. System initializes and authenticates the user (via fingerprint).  
2. Helmet detection is checked before enabling ignition.  
3. If helmet not worn → ignition denied + alert sent.  
4. During ride, driver’s temperature and health are monitored.  
5. If abnormal health or crash detected → location sent via Telegram.  
6. All parameters displayed on LCD in real-time.  

---

## 💻 Hardware Setup (Conceptual)
| Component | Function |
|------------|-----------|
| ESP32 | Main control and communication |
| IR Sensor | Helmet detection |
| DHT11 | Temperature sensing |
| Tilt Sensor | Accident detection |
| GPS Module | Location tracking |
| Relay | Ignition control |
| LCD | Display output |
| Power Supply | System power |

---

## 📨 Emergency Communication
The system uses the *Telegram Bot API* to send:
- Unauthorized access alerts  
- Accident alerts with GPS coordinates  
- Rider’s health status during emergencies  

---

## 🌍 Future Scope
- Integration with Google Maps API for live accident location tracking.  
- GSM-based SMS fallback when Wi-Fi unavailable.  
- AI-based crash prediction using accelerometer data.  
- Integration with vehicle insurance data systems.  

---

## 📚 References
- IoT-Based Accident Detection and Smart Helmet Systems Research (IEEE, 2023)  
- ESP32 Wi-Fi IoT Applications, Espressif Systems Documentation  
- Telegram Bot API Developer Guide  

---

## 👩‍💻 Contributors
- *Sai Tarun B G* – Hardware & IoT Design  
- *Department of ECE, CMRIT Bangalore (2024–25)*
