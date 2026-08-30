# Smart-Irrigation-System-Using-Arduino-and-Soil-Moisture-Sensor
The Smart Irrigation System is an automated agriculture system that monitors the moisture content of soil and automatically supplies water whenever the soil becomes too dry.
# 🌱 Smart Irrigation System

An Arduino-based automated irrigation system that monitors soil
moisture and automatically controls a water pump according to
the moisture level of the soil.

## 🚀 Features

- Automatic irrigation
- Soil moisture monitoring
- Relay-based pump control
- Water conservation
- Real-time Serial Monitor data
- Dry/Wet threshold control
- Low-cost implementation

## 🛠️ Hardware

- Arduino UNO
- Soil Moisture Sensor
- Relay Module
- DC Water Pump
- Water Tank
- Jumper Wires
- Breadboard
- External Power Supply

## ⚙️ Working

The soil moisture sensor continuously measures the moisture
level of the soil.

When the soil becomes dry, Arduino activates the relay and
turns ON the water pump.

When sufficient moisture is detected, Arduino turns OFF the
pump.

## 🔌 Circuit

### Soil Moisture Sensor

| Sensor | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |

### Relay

| Relay | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| IN | D7 |

## <img width="900" height="675" alt="image" src="https://github.com/user-attachments/assets/e0547450-63ba-467e-9edf-b25d521ed6d0" />


### Prototype

![Prototype](Images/prototype.jpg)

### Circuit

![Circuit](Images/circuit.jpg)

### Soil Sensor

![Soil Sensor](Images/soil_sensor.jpg)

### Pump

![Pump](Images/pump.jpg)

## 💻 Software

- Arduino IDE
- Embedded C/C++

