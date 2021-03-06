#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
   Servo Bottom;             // a maximum of eight servo objects can be created 
 
int pos = 1; 

 
void setup() 
{ 
  myservo.attach(9);
Bottom.attach (10);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {             // in steps of 1 degree 
    Bottom.write(pos);
    myservo.write(pos);
        // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    Bottom.write(pos);  
myservo.write(pos);
    delay(15);  
  } 
}
