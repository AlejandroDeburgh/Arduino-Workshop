#include<Servo.h> //include servo library

Servo rotate; //initialize variable with the name rotate


void setup() 
{
  rotate.attach(6);//servo is attached to digital pin 6
}

void loop() 
{

 for (int i=0; i<= 180; i+= 1)//Make a full rotation from 0 to 180
   {
    rotate.write(i);//write function is to set the output(In this case it's the position of the shaft             
    delay(15);//for stability                     
   }
    
 for (int i=180; i>=0; i-= 1)//once the servo reaches 180 it will go back to 0
   { 
    rotate.write(i);            
    delay(15);                      
   }

}
