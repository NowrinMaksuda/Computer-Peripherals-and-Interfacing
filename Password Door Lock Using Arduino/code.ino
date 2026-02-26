#include <Keypad.h>
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

#define buzzer 11

Servo myServo;
LiquidCrystal_I2C lcd(0x27,16,2);

const String password = "0123";
String inputPassword = "";

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','D','C'} // 'D' will act as Enter
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

bool doorOpen = false;
byte cursorPos = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  myServo.attach(10);
  myServo.write(110); // Locked
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("DOOR LOCK SYSTEM");
  delay(2000);
  lcd.clear();
  Serial.begin(9600); // Debug
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("ENTER PASSWORD");
  lcd.setCursor(cursorPos,1);

  char key = keypad.getKey();
  if(key){
    Serial.println(key); // Check key press in Serial Monitor
    if(key == '*'){
      resetInput();
    }
    else if(key == 'D'){ // Enter
      checkPassword();
    }
    else{
      addKey(key);
    }
  }
}

void addKey(char key){
  if(inputPassword.length() < 4){
    lcd.setCursor(cursorPos++,1);
    lcd.print("*");
    inputPassword += key;
  }
}

void checkPassword(){
  lcd.clear();
  if(inputPassword == password){
    // Short buzzer beep
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);

    if(!doorOpen){
      myServo.write(50); // Open
      lcd.print("ACCESS GRANTED");
      lcd.setCursor(0,1);
      lcd.print("DOOR OPENED");
      doorOpen = true;
    } else{
      myServo.write(110); // Lock
      lcd.print("ACCESS GRANTED");
      lcd.setCursor(0,1);
      lcd.print("DOOR LOCKED");
      doorOpen = false;
    }
  }
  else{
    // Wrong password alert
    for(int i=0;i<3;i++){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(200);
    }
    lcd.print("WRONG PASSWORD");
    lcd.setCursor(0,1);
    lcd.print("TRY AGAIN");
  }
  delay(2000);
  resetInput();
}

void resetInput(){
  inputPassword = "";
  cursorPos = 0;
  lcd.clear();
}
