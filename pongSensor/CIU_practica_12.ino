// C++ code
//
int var = 0;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  var = analogRead(A0);
  Serial.write(var / 4);
  delay(10); // Delay a little bit to improve simulation performance
}
