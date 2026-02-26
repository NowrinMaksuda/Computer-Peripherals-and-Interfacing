Temperature Monitoring System Using Arduino
📌 Project Overview

This project implements a Temperature Monitoring System using Arduino and an analog temperature sensor (such as LM35 / TMP36).
The sensor reads temperature values and sends real-time data to the Serial Monitor.
If the temperature exceeds a predefined threshold, a warning message “Extreme Heat” is displayed.

The project is designed and simulated using Tinkercad.

🎯 Features

Real-time temperature measurement

Analog sensor data reading

Temperature display on Serial Monitor

Warning message for extreme temperature

Simple and efficient Arduino implementation

🧰 Components Used

Arduino Uno

Temperature Sensor (LM35 / TMP36)

Jumper Wires

⚙️ Pin Configuration
Component	Arduino Pin
Temperature Sensor (Output)	A0
VCC	5V
GND	GND
🛠️ Working Principle

The temperature sensor outputs an analog voltage proportional to temperature

Arduino reads the analog value from pin A0

The voltage is calculated using:

Voltage = (Analog Reading × 5) / 1024

Temperature is calculated using:

Temperature (°C) = 100 × (Voltage − 0.5)

The temperature value is displayed on the Serial Monitor

If temperature exceeds 40°C, a warning message “Extreme Heat” is printed

▶️ How to Run the Project

Open Tinkercad → Circuits

Create a new circuit

Add Arduino Uno and a temperature sensor

Connect the sensor output to A0

Paste the Arduino code

Click Start Simulation

Open the Serial Monitor to view temperature readings

🧠 Learning Outcomes

Analog sensor interfacing

Temperature calculation using Arduino

Serial communication

Conditional logic implementation

Basic embedded system design

🚀 Possible Applications

Temperature alert system

Environmental monitoring

Overheat detection

Smart home temperature sensing

🔮 Future Enhancements

LCD temperature display

Buzzer alert for high temperature

IoT-based temperature monitoring

Data logging system

👩‍💻 Author

Naurin
BSc in Computer Science & Engineering

📜 License

This project is created for educational purposes only.