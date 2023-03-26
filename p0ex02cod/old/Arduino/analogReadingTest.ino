/*


*/

int analogIn = A0;
int analogOut = 3;
int analogValue = 0;
int pmwValue = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  analogValue = analogRead(analogIn);//reads sensor or tuner INPUT
  
  //delay(995);
  
  pmwValue = map(analogValue, 0, 1023, 0, 255);//scales voltage into integers
  
  //
  
  Serial.print("Analog input = ");
  Serial.println(analogValue);
  Serial.print("PMW output = ");
  Serial.println(pmwValue);
  delay(995);
  analogWrite(analogOut, pmwValue);//OUTPUTS integers scaled back in voltage
  delay(2);
}
