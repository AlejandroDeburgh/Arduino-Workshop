int LED=4; //we connected the LED to pin 4
int counter=0; //initialize counter
void setup() {
  // put your setup code here, to run once:
 //set pin 4 as output
  //begin serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  counter=counter+1; // increment counter
  Serial.print("Blink Number: ");
  Serial.println(counter);
digitalWrite(LED,HIGH); //Power LED ON
delay(1000); //wait 1 second
 //Power LED OFF
delay(1000); //wait 1 second
}
