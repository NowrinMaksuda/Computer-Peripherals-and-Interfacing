//C++ code
//

const int trigPin = 6;
const int echoPin = 5;

const int ledSeq1 = 2;
const int ledSeq2 = 3;
const int ledSeq3 = 4;

const int led1 = 9;
const int led2 = 8;
const int led3 = 7;
const int led4=10;
const int led5=11;

float temp_celcius;
float voltage;
float analog_reading;


long duration;
int distance;

void setup() {
  pinMode(ledSeq1, OUTPUT);
  pinMode(ledSeq2, OUTPUT);
  pinMode(ledSeq3, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // LED sequence
  digitalWrite(ledSeq1, HIGH);
  delay(500);
  digitalWrite(ledSeq1, LOW);
  delay(500);

  digitalWrite(ledSeq2, HIGH);
  delay(500);
  digitalWrite(ledSeq2, LOW);
  delay(500);

  digitalWrite(ledSeq3, HIGH);
  delay(500);
  digitalWrite(ledSeq3, LOW);
  delay(500);

  // Ultrasonic distance measurement
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // LED control based on distance
  if (distance > 0 && distance <= 30) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } 
  else if (distance > 30 && distance <= 100) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  } 
  else if (distance > 100) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  } 
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

  delay(500);
  // Temperature censor
  
  analog_reading =analogRead(A0);
  Serial.println(analog_reading);
  voltage= analog_reading*5/1024;
  temp_celcius=100*(voltage-0.5);
  Serial.println(temp_celcius);
  if(temp_celcius>40.0){
    Serial.println("Extreme Heat");
    digitalWrite(led5,HIGH);
    delay(5000);
    digitalWrite(led5,LOW);
    delay(2000);
  }
  else{
    Serial.println("Normal");
    digitalWrite(led4,HIGH);
    delay(5000);
    digitalWrite(led4,LOW);
    delay(2000);
  }
  delay(500);
}