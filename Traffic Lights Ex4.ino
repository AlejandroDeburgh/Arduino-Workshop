int Red=4;
WRITECODEHERE//create a variable "Yellow" with a value of 5
int Green=6;

void setup() {
  // put your setup code here, to run once:
pinMode(Green,OUTPUT); //set pin as output
WRITECODEHERE //set Yellow as output
pinMode(Red,OUTPUT); //set pin as output

digitalWrite(Green,LOW); //initial state
digitalWrite(Yellow,LOW); //create a variable "Yellow" with a 
digitalWrite(Red,LOW); //initial state

WRITECODEHERE//Start serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
//Yield

digitalWrite(Green,LOW);
digitalWrite(Yellow,HIGH);
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Yield ");
delay(1000);

// Go
WRITECODEHERE
WRITECODEHERE
WRITECODEHERE

Serial.println(" Light Mode : Go ");
WRITECODEHERE//delay of 2 seconds

// Stop
digitalWrite(Green,LOW);
digitalWrite(Yellow,LOW);
digitalWrite(Red,HIGH);

Serial.println(" Light Mode : STOP ");
delay(2000);
}
