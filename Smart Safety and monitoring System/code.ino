#include <Servo.h>
#include <LiquidCrystal.h>
unsigned const int A = 13;
unsigned const int B = 12;
unsigned const int C = 11;
unsigned const int D = 10;
unsigned const int E = 9;
unsigned const int F = 8;
unsigned const int G = 7;
unsigned const int H = 6;
const int temperaturePin = 0;
const int buzzer = 12;
int gasSensorPin = A1;
int sensorval;

Servo servo1, servo2;
int servo1Pin = 11;
int servo2Pin = 10;

int red_led = 9;
int green_led = 8;

LiquidCrystal lcd(7, 6, 2, 3, 4, 5);

int buttonstate = 0;
const int resetbtn = 13;
int repeat = 0;
long time;
float distance;
void setup() {
  pinMode(3, OUTPUT); 
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(buzzer, OUTPUT);

  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo1.write(90);
  servo2.write(90);

  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(resetbtn, INPUT);

  lcd.begin(16, 2);
}
void zero(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void one(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void two(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void three(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void four(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void five(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void six(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void seven(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void eight(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void nine(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
  Serial.println(9);
}

void loop() {
  digitalWrite(3,LOW);
  delay(1000);

  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);

  time=pulseIn(2 , HIGH);
  Serial.print("time: ");
  Serial.println(time);
  distance = time * 0.0343/2;

  Serial.print("Distance:");
  Serial.println(distance);
  
  float voltage, degreesC;
  voltage = getVoltage(temperaturePin);
  degreesC = (voltage - 0.5) * 100.0;

  sensorval = analogRead(gasSensorPin);
  buttonstate = digitalRead(resetbtn);

  if (buttonstate == HIGH) {
    repeat = 0;
  }

  if (degreesC > 37 || sensorval > 700 || repeat == 1) {
    repeat = 1;

    tone(buzzer, 800, 800);

    servo1.write(0);
    servo2.write(0);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("DANGER!!");
    lcd.setCursor(0, 1);
    lcd.print("VACATE Building!");

    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);

    delay(1000);
    tone(buzzer, 600, 800);
    digitalWrite(red_led, LOW);
    delay(400);
    zero();
    delay(1000);
    one();
    delay(1000);
    two();
    delay(1000);
    three();
    delay(1000);
    four();
    delay(1000);
  
  } else {
    servo1.write(90);
    servo2.write(90);
    delay(1000);

    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("SAFE");
    lcd.setCursor(6, 0);
    lcd.print(degreesC);
    lcd.print("C");
    lcd.setCursor(0, 1);
    lcd.print("Gas Conc.:");
    lcd.print(sensorval);
    five();
    delay(1000);
    six();
    delay(1000);
    seven();
    delay(1000);
    eight();
    delay(1000);
    nine();
    delay(1000);
  }
}

float getVoltage(int pin) {
  return (analogRead(pin) * 0.004882814);
}
