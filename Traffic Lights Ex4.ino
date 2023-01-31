int Red=4;
int Yellow=5;
int Red=4;
int Yellow=5;
int Green=6;//Set value 6 to a variable "Green"
void setup() {
  // put your setup code here, to run once:
pinMode(Green,OUTPUT); //set pin as output
pinMode(Yellow,OUTPUT); //set pin as output
WRITECODEHERE//set RED pin as output

digitalWrite(Green,LOW); //initial state
WRITE CODE HERE //initial state for yellow LED
digitalWrite(Red,LOW); //initial state

WRITECODEHERE//Begin serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
//Yield

digitalWrite(Green,LOW);
digitalWrite(Yellow,HIGH);
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Yield ");
WRITECODEHERE//1 SECOND DELAY

// Go
WRITECODEHERE
WRITECODEHERE
WRITECODEHERE

Serial.println(" Light Mode : Go ");
delay(2000);

// Stop
digitalWrite(Green,LOW);
digitalWrite(Yellow,LOW);
digitalWrite(Red,HIGH);

Serial.println(" Light Mode : STOP ");
delay(2000);
}//Set value 6 to a variable "Green"
void setup() {
  // put your setup code here, to run once:
pinMode(Green,OUTPUT); //set pin as output
pinMode(Yellow,OUTPUT); //set pin as output
WRITECODEHERE//set RED pin as output

digitalWrite(Green,LOW); //initial state
WRITE CODE HERE //initial state for yellow LED
digitalWrite(Red,LOW); //initial state

WRITECODEHERE//Begin serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
//Yield

digitalWrite(Green,LOW);
digitalWrite(Yellow,HIGH);
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Yield ");
WRITECODEHERE//1 SECOND DELAY

// Go
WRITECODEHERE
WRITECODEHERE
WRITECODEHERE

Serial.println(" Light Mode : Go ");
delay(2000);

// Stop
digitalWrite(Green,LOW);
digitalWrite(Yellow,LOW);
digitalWrite(Red,HIGH);

Serial.println(" Light Mode : STOP ");
delay(2000);
}
