🔐 Password Door Lock Using Arduino

(Tinkercad Simulation Project)

📌 Project Description

This project demonstrates a Password-Based Door Lock System using Arduino.
A 4×4 Keypad is used to enter a password. If the correct password is entered, the servo motor rotates to open or lock the door. If an incorrect password is entered, a buzzer alert is triggered.
The entire system is designed and simulated using Tinkercad.

🎯 Features

🔢 Password input using 4×4 Keypad

🔐 Door locking/unlocking using Servo Motor

📟 16×2 I2C LCD display for system messages

🔔 Buzzer alert for wrong password

✅ Access granted message for correct password

🔁 Same password toggles door open and close

🧰 Components Used
Component	Quantity
Arduino Uno	1
4×4 Keypad	1
Servo Motor	1
16×2 I2C LCD	1
Buzzer	1
Jumper Wires	As required
🔑 Default Password
0123

🔸 You can change the password by editing this line in the code:
const String password = "0123";

🛠️ Working Principle

LCD displays ENTER PASSWORD

User enters a 4-digit password using the keypad

* → Clear / Reset input

D → Enter / Submit password

✅ Correct password → Door opens or locks

❌ Wrong password → Buzzer sounds 3 times

⚙️ Pin Configuration
Component	Arduino Pin
Keypad Rows	2, 3, 4, 5
Keypad Columns	6, 7, 8, 9
Servo Motor	10
Buzzer	11
LCD (I2C)	SDA, SCL
▶️ How to Run the Project (Tinkercad)

Open Tinkercad → Circuits → Create New Circuit

Place all required components

Connect them according to the pin configuration

Paste the Arduino code

Click Start Simulation

Enter the password to test the door lock system

🧠 Learning Outcomes

Basics of Arduino programming

Interfacing keypad and servo motor

LCD communication using I2C

Embedded system design

Basic security system implementation

🚀 Future Improvements

RFID-based access control

Fingerprint authentication

Mobile app control

EEPROM-based password storage

GSM alert system

👩‍💻 Author

Nowrin
BSc in Computer Science & Engineering
Arduino & Embedded Systems Learner