int pushButton = 4;
int buzzer=12;   // digital pin 3 has LED attached to it
// the setup routine runs once when you press reset:
void setup(){
  
Serial.begin(9600);// initialize serial communication at 9600 bits per second: 
pinMode(pushButton, INPUT);// make the pushbutton's pin an input:
pinMode(buzzer,OUTPUT); // make the LED pin an output
}

// the loop routine runs over and over again forever:
void loop() {
  
  int buttonState = digitalRead(pushButton);// read the input pin and save it variable named buttonState
  
  if (buttonState==HIGH)// when the pushbutton is pressed
  {
    digitalWrite(buzzer,HIGH); // Sending HIGH Signal to LED
    Serial.print (" Pushbutton is pressed, value is : ");
  Serial.println(buttonState);// print out the state of the button:
  }
  else
  {
    digitalWrite(buzzer,LOW); // Sending LOW signal to LED
    Serial.print (" Pushbutton is not pressed, value is : ");
  Serial.println(buttonState);// print out the state of the button:    
  }
  delay(1);        // delay in between reads for stability
}
