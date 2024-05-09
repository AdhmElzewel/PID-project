#include <dht11.h>
#define DHT11PIN 7
dht11 DHT11;
#include <LiquidCrystal.h> 
LiquidCrystal LCD(8,9,10,11,12,13); 
#define in1 3 //peltier  L298 Pin in1 
#define in2 4 //peltier  L298 Pin in2 
#define in3 5 //dc fan  L298 Pin in1 
#define in4 6 //dc fan  L298 Pin in2 
#define Down_buttonPin 2
#define Up_buttonPin 1

int DT = 40;    // counter for the number of button presses
int up_buttonState = 0;       // current state of the up button
int up_lastButtonState = 0;   // previous state of the up button

int down_buttonState = 0;         // current state of the up button
int down_lastButtonState = 0;     // previous state of the up button
bool bPress = false;
void setup() {
pinMode(in1, OUTPUT); 
pinMode(in2, OUTPUT); 
pinMode(in3, OUTPUT); 
pinMode(in4, OUTPUT); 
pinMode(Up_buttonPin, INPUT_PULLUP); 
pinMode(Down_buttonPin, INPUT_PULLUP); 
Serial.begin(9600);
  LCD.begin(16, 2);
  LCD.setCursor(0, 0);
  LCD.print("D Temp:");
  LCD.setCursor(2, 1);
  LCD.print(DT);
}

void loop() {
checkUp();
  checkDown();

  if ( bPress)
  {
    bPress = false;
    LCD.setCursor(0,1);
    LCD.print("      ");
    LCD.setCursor(0, 1);
    LCD.print(DT);
  }
    int chk = DHT11.read(DHT11PIN);
  int b=(float)DHT11.temperature;
LCD.setCursor(8,0);  
LCD.print("R Temp:");
 LCD.setCursor(8, 1);
LCD.print(b);
if(DT>b){
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
}
else if(DT<b){
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
}
else {
  digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);}

}
void checkUp()
{
  up_buttonState = digitalRead(Up_buttonPin);
  if (up_buttonState != up_lastButtonState)    // compare the buttonState to its previous state
  {
    if (up_buttonState == LOW)   // if the state has changed, increment the counter
    {
      bPress = true;  // if the current state is HIGH then the button went from off to on:
     DT++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(DT);
    }
    else {
      Serial.println("off"); // if the current state is LOW then the button went from on to off:
    }
    delay(50);  // Delay a little bit to avoid bouncing
  }

  up_lastButtonState = up_buttonState;   // save the current state as the last state, for next time through the loop
}

void checkDown()
{
  down_buttonState = digitalRead(Down_buttonPin);
  if (down_buttonState != down_lastButtonState)  // compare the buttonState to its previous state
  {
    if (down_buttonState == LOW)   // if the state has changed, increment the counter
    {
      bPress = true;
      DT--;  // if the current state is HIGH then the button went from off to on:
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(DT);
    } else {
      Serial.println("off");  // if the current state is LOW then the button went from on to off:
    }
    delay(50);            // Delay a little bit to avoid bouncing
  }
  down_lastButtonState = down_buttonState;  // save the current state as the last state, for next time through the loop

}
