/*
  sketch : To connect ESP8266 Witty cloud Development Board to wifi and print ip address of the n/w
*/
#include <ESP8266WiFi.h>

void setup(){

  Serial.begin(9600);
  WiFi.begin("Parth","18122003");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print('.');
    delay(200);
  }
  Serial.println();
  Serial.println("witty Board Connect");
  Serial.println(WiFi.localIP());

}

void loop(){

}