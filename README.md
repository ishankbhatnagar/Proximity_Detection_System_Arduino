# Ultrasonic Sensor with Buzzer – Proximity Detection System

## 📌 Abstract
This project utilizes an ultrasonic sensor and a buzzer to create a simple proximity detection system using an Arduino.  
The ultrasonic sensor measures the distance between the sensor and nearby objects by emitting ultrasonic pulses and calculating the time it takes for the pulse to reflect back.  

The system continuously monitors the distance, and if an object is detected within a specified threshold (**18 cm**), a buzzer is activated to signal proximity.  

The setup is ideal for applications such as:
- Obstacle detection  
- Collision avoidance  
- Simple distance-based alerts  

This demonstrates efficient use of basic sensor interfacing and real-time feedback mechanisms using Arduino.

---

## 🔧 Hardware Components
1. Arduino Board (e.g., Arduino Uno)  
2. Buzzer  
3. Ultrasonic Distance Sensor (HC-SR04, 4-pin)  
4. Jumper Wires (for connecting components)  
5. Breadboard  

---

## 🔌 Interconnections

### Ultrasonic Sensor (HC-SR04):
- **VCC** → 5V on Arduino  
- **GND** → GND on Arduino  
- **Trigger Pin** → Pin 10 on Arduino  
- **Echo Pin** → Pin 9 on Arduino  

### Buzzer:
- **Positive Terminal** → Pin 3 on Arduino  
- **Negative Terminal** → GND on Arduino  

---

## 📸 Circuit Images

### Arduino Circuit
![Arduino Circuit](images/Arduino_Circuit.png)

![Arduino Circuit 2](images/Arduino_Circuit_2.png)

### Arduino Circuit Simulation
![Arduino Circuit Simulation](images/Arduino_Circuit_Simulation.png)

### Working Circuit
![Working Circuit](images/Working_Circuit.png)
