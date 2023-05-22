/*

Shubh Khandelwal
CS22B1090

Project 01: Environment Sensor

The attached file is the electronic design for an environment sensor.
The design uses a gas sensor and a temperature sensor to understand the environment of Mars better.
The connections have been made with an Arduino Uno for processing the input given by the sensors.
*/

// C++ code
int celsius;
int reading;
//

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  celsius = map(((analogRead(A1) - 20) * 3.04), 0, 1023, -40, 125);
  reading = analogRead(A0);
  reading = map(reading, 300, 750, 0, 100);
  Serial.print("The reading of the gas sensor is ");
  Serial.print(reading);
  Serial.println(".");
  if (reading > 8){
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  Serial.print("The reading of the temperature sensor is ");
  Serial.print(celsius);
  Serial.println(".");
  if (celsius > 40){
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(1000); // Wait for 1000 milliseconds
}