int Red=4;
int Yellow=5;
int Green=6;

void setup() {
  // put your setup code here, to run once:
pinMode(Green,OUTPUT); //set pin as output
pinMode(Yellow,OUTPUT); //set pin as output
pinMode(Red,OUTPUT); //set pin as output

digitalWrite(Green,LOW); //initial state
digitalWrite(Yellow,LOW); //initial state
digitalWrite(Red,LOW); //initial state

Serial.begin(9600);
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
digitalWrite(Green,HIGH);
digitalWrite(Yellow,LOW);
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Go ");
delay(2000);

// Stop
digitalWrite(Green,LOW);
digitalWrite(Yellow,LOW);
digitalWrite(Red,HIGH);

Serial.println(" Light Mode : STOP ");
delay(2000);
}
