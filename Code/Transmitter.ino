// include library for sensor-specific functions
#include "SR04.h" // ultrasonic sensor library
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define trigPin_1 3
#define echoPin_1 4
#define trigPin_2 6
#define echoPin_2 5
//#define LED 2
long x=0;
long y=0;
int counter=0;
int a=0;
int b=0;
int c=0;
float max_distance = 40;

// initialize two sensor objects
SR04 sensor1 = SR04(echoPin_1, trigPin_1);  // left sensor
SR04 sensor2 = SR04(echoPin_2, trigPin_2);  // right sensor

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

void setup() {
  pinMode(A4,INPUT);
  Serial.begin(9600);     // initialize serial monitor at 9,600 baud
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  float distance_1 = sensor1.Distance();
  float distance_2 = sensor2.Distance();

if (distance_1<max_distance){
  x=1;
}
else{
  x=0;
}
if (distance_2<max_distance){
  y=1;
}
else{
  y=0;
}
if(x==0 && y==0 && c==0){
    c=1;
}


if(x==1 && y==0 && c==1){
    if(b==1){
        const char text[] = "off";
        radio.write(&text, sizeof(text));
        delay(500);
        b=0;
        a=0;
    }
    else{
        a=1;
    }
}


if(x==0 && y==1 && c==1){
    if(a==1){
        const char text[] = "on";
        radio.write(&text, sizeof(text));
        Serial.println("in");
        delay(500);
        b=0;
        a=0;
    }
    else{
        b=1;
    }
}


}
