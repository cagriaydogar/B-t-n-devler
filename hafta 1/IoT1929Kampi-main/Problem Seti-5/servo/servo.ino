#include <Servo.h>
Servo servodeneme;

void setup()
{
  servodeneme.attach(9);
}

void loop()
{
    
     for(int i=0; i<=180; i=i+15)
     {
     servodeneme.write(i);
     delay(500);
     servodeneme.write(i-30);
     delay(500);
     }

}
