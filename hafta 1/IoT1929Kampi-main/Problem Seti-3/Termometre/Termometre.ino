

#include <dht11.h> 
#define DHT11PIN 3 
dht11 DHT11;

void setup()
{
  Serial.begin(9600); 
  Serial.println("Arduinoturkiye.com DHT11 Test Programi");
}

void loop()
{

  Serial.println("\n");
  int chk = DHT11.read(DHT11PIN);
  
  Serial.print("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Sicaklik (Celcius): ");
  Serial.println((float)DHT11.temperature, 2);

  Serial.print("Sicaklik (Fahrenheit): ");
  Serial.println(DHT11.fahrenheit(), 2);

  Serial.print("Sicaklik (Kelvin): ");
  Serial.println(DHT11.kelvin(), 2);

  delay(2000);
  
}
