#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define Relay 10
String TEXT="";
int counter=0;
char on[] = "on";
char off[] = "off";

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

void setup() {
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}

void loop() {

  if (radio.available()) {
    char text[32] = "";
    radio.read(&text, sizeof(text));
    TEXT = text;
    int result = strcmp(text, on);
    if(result==0){
      counter-=1;
    }
    else{
      counter+=1;
    }
    
  }

  if (counter<0){
    counter = 0;
  }
  
  if (counter > 0){
    digitalWrite(Relay, LOW);
  }
  else{
  digitalWrite(Relay, HIGH);
  }
}
