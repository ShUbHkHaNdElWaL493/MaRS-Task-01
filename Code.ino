/*

Shubh Khandelwal
CS22B1090

Project 02: Solar Sensor
 
*/

// C++ code
int readIntensity;
//

void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  readIntensity = analogRead(A0);
  if (readIntensity < 250) {
    digitalWrite(10, HIGH);
  }else{
    digitalWrite(10, LOW);
  }
  if (digitalRead(4) == LOW)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
  delay(500); // Wait for 500 millisecond(s)
}