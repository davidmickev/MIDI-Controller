//Your Team Number : 36
//The Names and NetIDs of ALL the Team Members 
//Kevin Andrews -- netID: kandre28
//Deividas Mickevicius -- netID: dmicke5
//Jeremy Laier -- netID: jlaier2
//Your Project Name : Tap Tunes
//The 100 word Abstract for your project
//We designed two midi devices that send serial data into a master arduino, it then gets converted to midi data and sent out to a virtual midi port which can be linked with any music software of choice to play music for you.
//Each hand has 5 buttons that can be mapped to any musical key with the software that you are using. In this, we are using integer data in the near middle of the soundboard.

//receiver: 

#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
//#include <Keyboard.h>

int noteON = 144;    /////
int velocity = 100;  /////
int noteOFF = 128;   //128 = 10000000 in binary, note off command

RF24 radio(9, 10);

const byte address[6] = "00003";

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MAX);
  radio.startListening();
 // Keyboard.begin();
}

void loop() {
  //int  randNumber = random(30, 60);
  if (radio.available()) {
    int data;
    radio.read(&data, sizeof(data));
    //delay(100);
    
    //Serial.println((int)data);
    MIDImessage(noteON, (int)data, velocity);
   delay(200);
    MIDImessage(noteOFF, (int)data, velocity);
   // delay(250);
  //  Keyboard.write(97);
  }
}

void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
  Serial.write(command);//send note on or note off command
  Serial.write(MIDInote);//send pitch data
  Serial.write(MIDIvelocity);//send velocity data
 // delay(100);
}

////transmitter:
//
//#include <SPI.h>
//#include "nRF24L01.h"
//#include "RF24.h"
//RF24 radio(7,8);
//
//const byte address[6] = "00003";
//
//void setup() {
//  radio.begin();
////  radio.setRetries(15,15);
//  radio.setPALevel(RF24_PA_MAX);
//  radio.openWritingPipe(address);
//  radio.stopListening();
//
//   pinMode(9, INPUT_PULLUP);
//   pinMode(2, INPUT_PULLUP);
//   pinMode(3, INPUT_PULLUP);
//   pinMode(4, INPUT_PULLUP);
//   pinMode(5, INPUT_PULLUP);
//   
//   Serial.begin(9600);
//}
//void loop() {
//  int p1 = digitalRead(9);
//  int p2 = digitalRead(2);
//  int p3 = digitalRead(3);
//  int p4 = digitalRead(4);
//  int p5 = digitalRead(5);
//
// if( p1 != HIGH){
//        sendRF(50);
//        delay(100);
// } if( p2 == LOW){
//        sendRF(55);
//        delay(100);
// } if( p3 == LOW){
//        sendRF(60);
//        delay(100);
// } if( p4 == LOW){
//        sendRF(65);
//        delay(100);
// } if( p5 == LOW){
//        sendRF(70);
//        delay(100);
// }
//
////left hand
////  if( p1 != HIGH){
////        sendRF(45);
////        delay(100);
//// } if( p2 == LOW){
////        sendRF(40);
////        delay(100);
//// } if( p3 == LOW){
////        sendRF(35);
////        delay(100);
//// } if( p4 == LOW){
////        sendRF(30);
////        delay(100);
//// } if( p5 == LOW){
////        sendRF(25);
////        delay(100);
//// }
// 
//}
//void sendRF(int data) {
//  Serial.println(data);
//  radio.write(&data, sizeof(data));
//}
