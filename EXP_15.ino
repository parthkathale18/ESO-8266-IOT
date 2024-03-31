#include <ESP8266WiFi.h>
#include<ThingSpeak.h>
#define led 2
#define red 15
#define green 12
#define blue 13
#define ldr A0

WiFiClient client;
long myChannelNumber=2491314;
const char myWriteAPIkey[]="HIJZS3AT648OL7TT";

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
  WiFi.begin("Parth","18122003");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print('.');
    delay(200);
  }
  Serial.println();
  Serial.println("witty board connected to wifi");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
}

void loop() {
  int value=analogRead(ldr);
  Serial.print("LDR value:");
  Serial.println(value);
  ThingSpeak.writeField(myChannelNumber,1,value,myWriteAPIkey);
  delay(200);
}