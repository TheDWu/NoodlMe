/*
=================NOODLME=================

Start button     = pin 2      (GND ----> button ----> pin2)
Water Pump Relay = pin 4
Green status LED = pin 7
Red Status LED   = pin 8
Buzzer output    = pin 3

Cup Dispensing Servo = pin 3
Arm Actuating Servo  = pin 5

*/

#include <Servo.h>

// Change this value to adjust how long the water is dispensed
const int waterDispTime = 20;

// Physical pin declarations
const int startButton = 2; 
const int waterPump = 4;
const int greenLED = 7;
const int redLED = 8; 
const int buzzerPin = 3;

int startButtonState = 0;

//Servo declarations
Servo cupServo
Servo armServo

void setup() {
  
  pinMode(startButton, INPUT_PULLUP);
  
  pinMode(waterPump, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT); 
  pinMode(buzzerPin, OUTPUT); 

  cupServo.attach(3);
  armServo.attach(5);
}


void loop() {

  //set our startButton variable = to the startButton
  startButtonState = digitalRead(startButton);
  
  //Check to see if the button has been pressed.
  
  if(startButtonState == LOW){
  
      //Turn the green LED off, turn the red LED on.      
      digitalWrite(greenLED, LOW); 
      digitalWrite(redLED, HIGH);
      
      //Push out the new ramen cup -- operate the cupServo
      cupServo.write(90);
      delay(1000);
      cupServo.write(0);
       
      //Punture the lid of the ramen cup -- operate the armServo
      armServo.write(90);
      delay(3000);
      
      //Turn on the water pump -- operate the waterPump for waterDispTime
      digitalWrite(waterPump, HIGH); 
      
      //Wait for 3 minutes
      unsigned long seconds = 1000L; //Notice the L 

      //To change the delay time, change the number to the amount of seconds you wish to wait.  
      unsigned long DelayAmount = seconds * 30;
      delay(DelayAmount);
      
      //Move the arm up and out of the way -- operate the armServo
      armServo.write(0);
      
      //Turn the green LED on, turn the red LED off.
      digitalWrite(greenLED, HIGH); 
      digitalWrite(redLED, LOW);
      
      //Sound the buzzer for x seconds 
      tone(buzzerPin, 2000); 

    }
    
   else{
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(waterPump, LOW);
    }
}
