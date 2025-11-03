// 4-way traffic light with 24 LEDs
int redPins[4]    = {5, 11, 8, 2};   
int yellowPins[4] = {6, 12, 3, 9};
int greenPins[4]  = {7, 13, 4, 10};
void setup() {
  for(int i=0; i<4; i++){
    pinMode(redPins[i], OUTPUT);
    pinMode(yellowPins[i], OUTPUT);
    pinMode(greenPins[i], OUTPUT);
  }
}

// Function to set one direction's lights
void setDirection(int dir, bool r, bool y, bool g){
  digitalWrite(redPins[dir], r);
  digitalWrite(yellowPins[dir], y);
  digitalWrite(greenPins[dir], g);
}

// Turn all directions Red except one
void allRedExcept(int dir){
  for(int i=0; i<4; i++){
    if(i==dir){
      digitalWrite(redPins[i], LOW); 
    } else {
      digitalWrite(redPins[i], HIGH);
      digitalWrite(yellowPins[i], LOW);
      digitalWrite(greenPins[i], LOW);
    }
  }
}

void loop() {
  for(int dir=0; dir<4; dir++){
    // Step 1: Green for current direction, Red for others
    allRedExcept(dir);
    setDirection(dir, false, false, true); 
    delay(3000);

    // Step 2: Yellow for current direction
    setDirection(dir, false, true, false); 
    delay(2000);

    // Step 3: Red for current direction 
    setDirection(dir, true, false, false);
    delay(500); 
  }
}
