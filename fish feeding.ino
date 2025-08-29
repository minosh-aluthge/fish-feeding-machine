#include <Servo.h>
Servo Dream_Apex;
int a=0;
int pos = 0;
long FISHFEEDER = 5000; // 12 hours between feeding
long endtime;
long now;
int i= 0;
int t=0;

void setup()
{
  Dream_Apex.attach(7);
  Dream_Apex.write(0);
  delay(15);
  
  pinMode(6,INPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  i=digitalRead(13);
  Serial.println(i);
  if (i==1)
  { 
    digitalWrite(10,HIGH);
    now = millis();
  endtime =now + FISHFEEDER;
  while (now < endtime)
  {
    Dream_Apex.write(0);
    delay(2000);
    now = millis();
  }
  for (pos = 0; pos < 180; pos += 1)
  {
    Dream_Apex.write(pos);
    delay(15);
    digitalWrite(11,HIGH);
  }
  for (pos = 180; pos >= 1; pos -= 1)
  {
    Dream_Apex.write(pos);
    delay(15);}{
     digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  }
  else{
    
  
     t=digitalRead(12);
    if(t==1 ){
      digitalWrite(11,HIGH);
      
  for (pos = 0; pos < 180; pos += 1)
  {
    Dream_Apex.write(pos);
    delay(15);
    digitalWrite(11,HIGH);
  }
  for (pos = 180; pos >= 1; pos -= 1)
  {
    Dream_Apex.write(pos);
    delay(15);}{
     digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  
  Serial.println(t);
       tone(8,1000);
      digitalWrite(11,LOW);
    }
      
    
  }

}