int LED=4; //we connected the LED to pin 4
int counter=0; //initialize counter
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT); //set pin 4 as output
Serial.begin(9600); //begin serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  counter=counter+1; // increment counter
  Serial.print("Blink Number: ");
  Serial.println(counter);
digitalWrite(LED,HIGH); //set pin 4 as output
delay(1000); //wait 1 second
digitalWrite(LED,LOW); //set pin 4 as input
delay(1000); //wait 1 second
}