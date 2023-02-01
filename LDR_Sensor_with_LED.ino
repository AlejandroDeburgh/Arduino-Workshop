int sensorPin=A2;
int sensorValue=0;
WriteCodeHere//initalize LED pin with variable

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED,OUTPUT);
  Serial.begin(9600);
//set pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(sensorPin);

  if(sensorValue<=400)
  {
    Serial.print("It's Dark , value is =");
    Serial.println(sensorValue);
  }

   else if(sensorValue>400)
  {
    Serial.print("It's Bright , value is =");
    Serial.println(sensorValue);   
  }

  delay(100);
}
