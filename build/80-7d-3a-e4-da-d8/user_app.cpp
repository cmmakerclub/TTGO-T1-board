#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>







void setup()
{
  
  
    pinMode(22,OUTPUT);


}
void loop()
{
    digitalWrite(22,1);
  delay(500);
  digitalWrite(22,0);
  delay(500);

  
}
