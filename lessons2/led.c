int j=7;
void setup()
{
  for(j=7;j>-1;j--)
  {
    pinMode(j, OUTPUT);
  }
}

void loop()
{
  for(j=7;j>-1;j--)
  {
  	digitalWrite(j, HIGH);
  	delay(200); // Wait for 200 millisecond(s)
  	digitalWrite(j, LOW);
  	delay(200); // Wait for 200 millisecond(s)
  }
}