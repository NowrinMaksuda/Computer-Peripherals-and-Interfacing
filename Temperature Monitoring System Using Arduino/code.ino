// C++ code
//

float temp_celcius;
float voltage;
float analog_reading;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(19600);
}

void loop()
{
  analog_reading = analogRead(A0);
  Serial.println(analog_reading);
  voltage = analog_reading * 5 / 1024; 
  // Wait for 1000 millisecond(s)
  temp_celcius = 100 * (voltage - 0.5);
  Serial.println(temp_celcius);
  if(temp_celcius > 40.0)
  {
    Serial.println("Extreme Heat");
    delay(5000);
  }
}