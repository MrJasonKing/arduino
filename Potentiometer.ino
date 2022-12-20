const int POT=0;
int value=0;
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  value = analogRead(POT);
  Serial.println(value);
  delay(500);
}
