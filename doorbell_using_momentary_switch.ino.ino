int switchPin=2;
int LedPin=13;
void setup() {
  pinMode(LedPin,OUTPUT);
  pinMode(switchPin,INPUT);
}
void loop() {
  digitalRead(switchPin);
  if(switchPin==HIGH)
  {
    digitalWrite(LedPin,HIGH);
  }
  else
  {
    digitalWrite(LedPin,LOW);
  }
}
