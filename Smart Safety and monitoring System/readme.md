# Smart Building Safety & Alert System using Arduino

## 📌 Project Overview
এই প্রজেক্টটি একটি **Smart Building Safety System**, যা আগুন, গ্যাস লিকেজ ও অস্বাভাবিক তাপমাত্রা শনাক্ত করে মানুষকে সতর্ক করে। সিস্টেমটি সেন্সরের মাধ্যমে তথ্য সংগ্রহ করে এবং বিপদজনক পরিস্থিতিতে অ্যালার্ম, LCD মেসেজ, LED ইন্ডিকেটর এবং সার্ভো মোটরের মাধ্যমে স্বয়ংক্রিয় নিরাপত্তা ব্যবস্থা চালু করে।

---

##  Features
-  **Temperature Monitoring** (Overheat Detection)
-  **Gas Leakage Detection**
-  **Buzzer Alert System**
-  **Automatic Decision Making**
-  **16x2 LCD Display Status**
-  **Red & Green LED Indicator**
-  **Servo Motor Controlled Gate**
-  **7-Segment Display Counting**
- **Reset Button Support**
-  **Ultrasonic Distance Measurement**

---

## 🧰 Components Used
- Arduino Uno  
- Servo Motor (2x)  
- Gas Sensor (MQ Series)  
- Temperature Sensor (LM35)  
- Ultrasonic Sensor (HC-SR04)  
- 16x2 LCD Display  
- Buzzer  
- Red LED  
- Green LED  
- Push Button (Reset)  
- 7-Segment Display  
- Jumper Wires  
- Breadboard  

---

## ⚙️ Working Principle
1. Ultrasonic Sensor দূরত্ব পরিমাপ করে  
2. Temperature Sensor থেকে তাপমাত্রা নেওয়া হয়  
3. Gas Sensor গ্যাসের মাত্রা মাপে  
4. যদি:
   - তাপমাত্রা **৩৭°C এর বেশি** হয়  
   - অথবা গ্যাস ভ্যালু **৭০০ এর বেশি** হয়  
   
   👉 তাহলে সিস্টেম **DANGER MODE** এ চলে যায়  

5. Danger Mode এ:
   - Buzzer বাজে  
   - Servo মোটর দরজা খুলে দেয়  
   - LCD তে **“DANGER!! VACATE Building!”** দেখায়  
   - Red LED অন হয়  
   - 7-segment এ কাউন্ট দেখায়  

6. Safe Mode এ:
   - Green LED অন থাকে  
   - LCD তে তাপমাত্রা ও গ্যাস কনসেন্ট্রেশন দেখায়  
   - Servo মোটর স্বাভাবিক অবস্থায় থাকে  

7. Reset Button চাপলে সিস্টেম আবার Normal Mode এ ফিরে আসে  

---

## 🧪 Threshold Values
| Parameter | Threshold |
|--------|----------|
| Temperature | > 37°C |
| Gas Sensor | > 700 |

---

## 📂 Files Included
- `code.ino` → Arduino Source Code  
- `README.md` → Project Documentation  

---

## ▶️ How to Run
1. Arduino IDE খুলুন  
2. কোডটি Arduino Uno তে আপলোড করুন  
3. সার্কিট ডায়াগ্রাম অনুযায়ী সব কানেকশন দিন  
4. পাওয়ার অন করুন  
5. Serial Monitor (9600 baud rate) চালু করুন  

---

## 📸 Output
- LCD তে Safe / Danger Status  
- Buzzer Sound  
- Servo Gate Open/Close  
- LED Indicator  
- 7-Segment Display Counting  

---

## 🚀 Future Improvements
- GSM Module দিয়ে SMS Alert  
- IoT Dashboard Integration  
- Fire Sensor যুক্ত করা  
- Mobile App Notification  

---

## 👩‍💻 Developed By
**Nowrin**  
BSc in Computer Science & Engineering  