#include <Servo.h> 
 
int servoPin1 = 11;
int servoPin2 = 9;
 
Servo servo1;  
Servo servo2;  

void setup() 
{ 
  servo1.attach(servoPin1); 
  servo2.attach(servoPin2);
  
  Serial.begin(9600);
  
  Serial.println("Please enter an angle between 0 and 120.");
} 
 
 
void loop() {
  if (Serial.available() > 0) {
    String userInput = Serial.readString();

    
    delay(1000);

    if (userInput.toInt() < 1000) {
      if ((userInput.toInt() >= 0) && (userInput.toInt() <= 120)){
        
          Serial.print("Servo1 = ");
          Serial.println(userInput);
          servo1.write(userInput.toInt());
        
        } else {
            Serial.println("Invalid value. Please enter an angle between 0 and 120.");  
          }
 
      
      } else if ((userInput.toInt() >= 1000) && (userInput.toInt() <= 1120)) {

        Serial.print("Servo2 = ");
        Serial.println(userInput.toInt() % 1000);
        servo2.write(userInput.toInt() % 1000);
      
      } else {
          Serial.println("Invalid value. Please enter an angle between 0 and 120.");
      }
      }
    delay(1000);
  }



