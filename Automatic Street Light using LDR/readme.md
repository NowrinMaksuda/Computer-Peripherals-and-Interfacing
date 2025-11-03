# 🌙 Automatic Street Light using LDR and Arduino

### 🔋 Project Type: Sensor-Based Automation  
### 🧠 Topic: Computer Peripherals and Interfacing  
### 👩‍💻 Author: **Nowrin Maksuda**

---

## 📖 Project Overview
This project is an **Automatic Street Light System** built using **Arduino UNO** and an **LDR (Light Dependent Resistor)**.  
It automatically turns **ON the LED** in the dark and **OFF** in the presence of light —  
just like a real-world smart street lighting system! 💡🌙  

---

## ⚙️ Components Required

| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino UNO | 1 | Main microcontroller board |
| LDR (Light Dependent Resistor) | 1 | Senses ambient light level |
| LED | 1 | Simulates the street light |
| Resistor (220Ω–10kΩ) | 1 | Current limiting for LED and LDR |
| Breadboard | 1 | For circuit connections |
| Jumper Wires | As needed | For connecting components |

---

## 🔌 Circuit Connections

| Arduino Pin | Component | Description |
|--------------|------------|-------------|
| A0 | LDR Sensor | Reads analog light intensity |
| 8 | LED | Controls LED ON/OFF |
| GND | Common Ground | Shared connection for LED & LDR |

---

## 🧾 Arduino Code

```cpp
const int ldrPin = A0;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 500) {
    digitalWrite(ledPin, HIGH);  // Turn LED ON when dark
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED OFF when bright
  }

  delay(200);
}
💡 Working Principle
The LDR senses the amount of light in the environment.

When light intensity drops below the threshold (e.g., 500), Arduino detects darkness and turns the LED ON.

When light intensity rises above the threshold, it means daytime — the LED turns OFF automatically.

🧭 Serial Monitor Output
Use the Arduino IDE’s Serial Monitor (baud rate 9600) to observe LDR readings:

Low value (e.g., < 500) → Dark

High value (e.g., > 500) → Bright

🪄 Applications
✅ Smart Street Lighting
✅ Energy-Efficient Home Lighting
✅ Automatic Garden Lamps
✅ Security Light Systems



![Circuit Diagram](images/circuit.png)

👩‍💻 Author Info
Nowrin Maksuda
🎓 BSc in Computer Science and Engineering
📚 Project: Computer Peripherals and Interfacing

🪪 License
This project is open-source and free to use for educational purposes.
Feel free to modify and enhance it! ✨

“Automation makes life easier — one sensor at a time.” 🤖💡