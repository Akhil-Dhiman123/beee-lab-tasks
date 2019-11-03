int sensorPin=A0;
int ledPin=13;
int sensorValue=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue=analogRead(sensorPin);
Serial.println(sensorValue);
delay(100);
if(sensorValue>300)
{
  digitalWrite(ledPin,LOW);
}
else
{
  digitalWrite(ledPin,HIGH);
}
}
