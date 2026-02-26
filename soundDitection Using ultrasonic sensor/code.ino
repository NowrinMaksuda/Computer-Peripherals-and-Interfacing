// C++ code
//

const int orangeLed = 2;
const int redLed = 4;
const int greenLed = 3;

const int trigPin = 9;
const int echoPin = 10;


void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(orangeLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(19600);
}

void loop()
{
  long duration;
  float distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034/2;
  Serial.println(distance);
  delay(500);
  if (distance > 50)
  {
    digitalWrite (redLed, LOW);
    digitalWrite (greenLed, HIGH);
    digitalWrite (orangeLed, LOW);
  }
  else if (distance > 20 && distance < 50)
  {
    digitalWrite (redLed, LOW);
    digitalWrite (greenLed, LOW);
    digitalWrite (orangeLed, HIGH);
  }
  else if (distance < 20)
  {
    digitalWrite (redLed, HIGH);
    digitalWrite (greenLed, LOW);
    digitalWrite (orangeLed, LOW);
  }
}