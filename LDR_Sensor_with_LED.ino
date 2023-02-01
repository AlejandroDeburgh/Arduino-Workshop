int sensorPin=A2;
int sensorValue=0;
int LED = 9;

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED,OUTPUT);
  Serial.begin(9600);
pinMode(LED,HIGH);  
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(sensorPin);

  if(sensorValue<=400)
  {
    Serial.print("It's Dark , value is =");
    Serial.println(sensorValue);
    digitalWrite(LED,HIGH);
  }

   else if(sensorValue>400)
  {
    Serial.print("It's Bright , value is =");
    Serial.println(sensorValue);
    digitalWrite(LED,LOW);    
  }

  delay(100);
}
