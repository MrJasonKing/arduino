/*
  Displays the numbers 0-9 on the display, at one second intervals
  Implemented using 5611AH - 8-segment display
  Pin assignment for 5611AH
     G  F com A  B
   __|__|__|__|__|__
  | 10  9 grd 7  6  |
  |  1  2 grd 4  5  |
   --|--|--|--|--|--
     E  D com C  P
     
  A=7,B=6,C=4,D=2,E=1,F=9,G=10,P=5,com=GND
  LED segment assignment corresponding to pins
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---  . P
    D
*/
 
// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 7;
int pinB = 6;
int pinC = 4;
int pinD = 2;
int pinE = 1;
int pinF = 9;
int pinG = 10;
int pinP = 5;
int count;
int green = 11, yellow = 12,red = 13;


void setup() {                
// initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(pinP, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);   
}

void loop() {
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  timer(8);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  timer(3);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  timer(5);
}

void timer(int nu)
{
  for(count = nu; count >=0; count--)
  {
    switch(count)
    {
      case 0:
      //0
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, LOW);   
      delay(500);               // wait for a second
  
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, HIGH);   
      delay(500);
      break;

      case 1:
      //1
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
    
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 2:
      //2
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, LOW);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
    
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, LOW);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 3:
      //3
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
    
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 4:
      //4
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 5:
      //5
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 6:
      //6
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 7:
      //7
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 8:
      //8
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;

      case 9:
      //9
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, LOW);  
      delay(500);               // wait for a second
      
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      digitalWrite(pinP, HIGH);  
      delay(500);
      break;
    }
  }
}
