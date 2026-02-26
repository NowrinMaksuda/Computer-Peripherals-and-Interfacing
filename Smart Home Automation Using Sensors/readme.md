🏠 Smart Home Automation System Using Arduino
📌 Project Overview

This project implements a Smart Home Automation System using Arduino by integrating multiple sensors and actuators.
The system automatically controls lighting, fan, door, gas alert, and security indicators based on real-time sensor data.

The project is designed and simulated using Tinkercad.

🎯 Features

💡 Automatic light control using LDR

🏃 Motion-based fan and indicator control using PIR sensor

🚪 Automatic door control using ultrasonic sensor and servo motor

🔥 Gas leakage detection with buzzer alert

🚨 Visual indicators using Red and Green LEDs

📟 Real-time monitoring via Serial Monitor

🧰 Components Used

Arduino Uno

LDR (Light Dependent Resistor)

Gas Sensor

PIR Motion Sensor

Ultrasonic Sensor

Servo Motor

Relay Module

Piezo Buzzer

Red LED

Green LED

NPN Transistor

Jumper Wires

⚙️ Pin Configuration
Component	Arduino Pin
LDR	A0
Gas Sensor	A1
Relay (Light Control)	13
PIR Sensor	9
NPN Transistor (Fan Control)	10
Servo Motor	7
Ultrasonic Trigger & Echo	6
Buzzer	8
Red LED	4
Green LED	3
🛠️ Working Principle
💡 Light Intensity Control (LDR)

Measures ambient light intensity

Automatically turns the bulb ON in darkness

Turns the bulb OFF in sufficient light

🏃 Motion Detection (PIR Sensor)

Detects human movement

Turns ON fan using NPN transistor

Green LED indicates motion detected

Red LED indicates no motion

🔥 Gas Detection System

Continuously monitors gas concentration

If gas value exceeds threshold:

Buzzer is activated

Warning message is displayed

🚪 Automatic Door System

Ultrasonic sensor measures distance

If object/person is detected within 100 cm:

Door opens using servo motor

Otherwise:

Door remains closed

▶️ How to Run the Project

Open Tinkercad → Circuits

Create a new circuit

Add Arduino Uno and required components

Connect components according to pin configuration

Paste the Arduino code

Click Start Simulation

Open Serial Monitor to observe system behavior

🧠 Learning Outcomes

Multi-sensor interfacing with Arduino

Real-time automation logic

Servo motor and relay control

Serial communication for monitoring

Basics of smart home systems

🚀 Applications

Smart home automation

Gas leakage alert system

Automatic lighting system

Security and access control

Energy-efficient home solutions

🔮 Future Enhancements

IoT-based remote monitoring

Mobile app control

Cloud data logging

Camera-based security system

Voice assistant integration

👩‍💻 Author

Naurin
BSc in Computer Science & Engineering

📜 License

This project is developed for educational purposes only