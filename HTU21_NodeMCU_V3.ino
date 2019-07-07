//#include <ESP8266WiFi.h>

//HTU21   NodeMCU_V3
// VIN      3v
// GND      G
// SCL      D1
// SDA      D2

#include <Wire.h>
#include "HTU21D.h"

HTU21D myHumidity;

void setup() {

  Serial.begin(115200);
  Serial.println();
  myHumidity.begin();
}

int value = 0;

void loop()
{
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();

  Serial.print("Time:");
  Serial.print(millis());
  Serial.print(" Temperature:");
  Serial.print(temp, 1);
  Serial.print("C");
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print("%");

  Serial.println();
  delay(1000);
}
