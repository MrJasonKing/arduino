const int BLED = 9;
const int GLED = 10;
const int RLED = 11;
const int BUTTON = 2;
boolean lastButton = LOW;
boolean currentButton = LOW;
int ledMode = 0;

void setup() {
 pinMode(BLED, OUTPUT);
 pinMode(GLED, OUTPUT);
 pinMode(RLED, OUTPUT);
 pinMode(BUTTON, INPUT);
}
boolean debounce(boolean last)
{
  boolean current = digitalRead(BUTTON);
  if (last != current)
  {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}

void setMode(int mode)
{
  //RED
  if(mode == 1)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, LOW);
  }
  //GREEN
  else if (mode == 2)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, LOW);
  }
  //BLUE
  else if (mode == 3)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, HIGH);
  }
  //PURPLE (RED+BLUE)
  else if (mode == 4)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, HIGH);
  }
  //TEAL (BLUE+GREEN)
  else if (mode == 5)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, HIGH);
  }
  
  //(GREEN+RED+BLUE)
  else if (mode == 6)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, HIGH);
  }
  //OFF (mode == 0)
  else  
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, LOW);
  }
}

void loop() 
{
 
  currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH)
  {
    ledMode=ledMode+1;
  }
  lastButton = currentButton;
  if (ledMode == 7) ledMode = 0;
  setMode(ledMode); 
}
