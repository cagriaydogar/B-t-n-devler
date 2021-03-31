const int led=4;
const int DC=3;
const int pot=A0;
int motor;

void setup()
{
  pinMode(DC,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  motor=analogRead(pot);
  motor=map(motor,0,1023,0,255);
  analogWrite(DC, motor);
  Serial.println(motor);
  
  if (motor>150)
  {
    digitalWrite(led,HIGH);
 
  }
  else{
  digitalWrite(led,LOW);
  }
}
