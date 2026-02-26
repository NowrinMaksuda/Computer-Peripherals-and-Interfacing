Ultrasonic Distance Indicator Using Arduino
📌 Project Overview

This project demonstrates an Ultrasonic Distance Measurement System using an HC-SR04 ultrasonic sensor and LED indicators.
Based on the measured distance, different LEDs turn ON to indicate safe, warning, or danger zones.

The project is implemented and tested using Tinkercad.

🎯 Features

Distance measurement using ultrasonic sensor

Green LED for safe distance

Orange LED for warning distance

Red LED for danger/close distance

Real-time distance display on Serial Monitor

🧰 Components Used

Arduino Uno

Ultrasonic Sensor (HC-SR04)

Red LED

Orange LED

Green LED

Resistors

Jumper Wires

⚙️ Pin Configuration
Component	Arduino Pin
Ultrasonic Trig Pin	9
Ultrasonic Echo Pin	10
Green LED	3
Orange LED	2
Red LED	4
🛠️ Working Principle

Arduino sends a trigger pulse to the ultrasonic sensor

Sensor emits ultrasonic waves

Echo pin receives the reflected signal

Distance is calculated using time and speed of sound

LEDs indicate distance range:

🟢 Distance > 50 cm → Safe

🟠 Distance between 20–50 cm → Warning

🔴 Distance < 20 cm → Danger

▶️ How to Run the Project

Open Tinkercad → Circuits

Create a new circuit

Add Arduino Uno and required components

Connect components according to pin configuration

Paste the Arduino code

Click Start Simulation

Open Serial Monitor to view distance values

🧠 Learning Outcomes

Ultrasonic sensor interfacing

Distance calculation using Arduino

LED-based indication system

Serial communication

Basic embedded system concepts

🚀 Possible Applications

Obstacle detection system

Parking assistance system

Distance alert system

Safety monitoring

🔮 Future Improvements

LCD distance display

Buzzer alert for danger zone

Servo motor for automatic barrier

IoT-based distance monitoring

👩‍💻 Author

Naurin
BSc in Computer Science & Engineering

📜 License

This project is created for educational purposes only.