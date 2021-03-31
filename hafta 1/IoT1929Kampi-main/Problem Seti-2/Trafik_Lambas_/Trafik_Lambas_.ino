int pinBacagi[]={1,2,3};
void setup()
{
  for(int j=0; j<4; j++)
  {
  pinMode(pinBacagi[j],OUTPUT);
  }
}

void loop(){
  digitalWrite(pinBacagi[0],HIGH);
  digitalWrite(pinBacagi[1],LOW);
  digitalWrite(pinBacagi[2],LOW);
  delay(10000);
  
  digitalWrite(pinBacagi[0],HIGH);
  digitalWrite(pinBacagi[1],HIGH);
  digitalWrite(pinBacagi[2],LOW);
  delay(10000);
  
  digitalWrite(pinBacagi[0],LOW);
  digitalWrite(pinBacagi[1],LOW);
  digitalWrite(pinBacagi[2],LOW);
  delay(2000);
  
  digitalWrite(pinBacagi[0],LOW);
  digitalWrite(pinBacagi[1],LOW);
  digitalWrite(pinBacagi[2],HIGH);
  delay(5000);
  
  }
