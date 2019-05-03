////ransmitter :
//#include <SPI.h>
//#include "nRF24L01.h"
//#include "RF24.h"
//
//int noteON = 144;    /////
//int velocity = 100;  /////
//int noteOFF = 128;   //128 = 10000000 in binary, note off command
//
//const byte BUTTON7 = 7;
//const byte BUTTON6 = 6;
//const byte BUTTON5 = 5;
//const byte BUTTON4 = 4;
//
//RF24 radio(9, 10);
//byte switchPin[4] = { 4, 5, 6, 7 };
//const byte address[6] = "00001";
//
//int pinVal4;
//int pinVal5;
//int pinVal6;
//int pinVal7;
//
//void setup() {
//  radio.begin();
//  radio.setRetries(15, 15);
//  radio.setPALevel(RF24_PA_MAX);
//  radio.openWritingPipe(address);
//  radio.stopListening();
//  for (byte i = 0; i <= 4; i++)
//    pinMode(switchPin[i], INPUT_PULLUP);
//  Serial.begin(9600);
//  randomSeed(analogRead(0));
//}
//
//void loop() {
//  int  randNumber = random(30, 60);
//
//  for (byte i = 0; i < 4; i++) {
//
//    //    pinVal4 = digitalRead(switchPin[4]);
//    //    pinVal5 = digitalRead(switchPin[5]);
//    //    pinVal6 = digitalRead(switchPin[6]);
//    //    pinVal7 = digitalRead(switchPin[7]);
//    //    if (pinVal4 == LOW || pinVal5 == LOW || pinVal6 == LOW || pinVal7 == LOW) {
//
//     sendRF(i);
//
//    //    for (int note=randNumber;note<70;note++) {//from note 50 (D3) to note 69 (A4)
//    if (i = 0) {
//      MIDImessage(noteON, randNumber, velocity);
//      MIDImessage(noteOFF, randNumber, velocity);
//    }
//
//    if (i = 1) {
//      MIDImessage(noteON, randNumber, velocity);
//      MIDImessage(noteOFF, randNumber, velocity);
//
//    }
//  if (i = 2) {
//      MIDImessage(noteON, randNumber, velocity);
//      MIDImessage(noteOFF, randNumber, velocity);
//    }
//   if (i = 3) {
//      MIDImessage(noteON, randNumber, velocity);
//      MIDImessage(noteOFF, randNumber, velocity);
//    }
//
//
//
//    //    MIDImessage(noteON, randNumber, velocity);//turn note on
//    //    delay(300);//hold note for 300ms
//    //    MIDImessage(noteOFF, randNumber, velocity);//turn note off
//    //    delay(200);//wait 200ms until triggering next note
//    //    Serial.write(10010000);
//    //    Serial.println(1);
//    //    Serial.write(1);
//    //    delay(100);
//    //    Serial.println(50);
//    //    Serial.write(50);
//    //    Serial.println(stoi(i));
//  }
//}
/////////////////////////////////////////////////////////////////////////
////    for (int note=30;note<70;note++) {//from note 50 (D3) to note 69 (A4)
////    MIDImessage(noteON, note, velocity);//turn note on
////    delay(300);//hold note for 300ms
////    MIDImessage(noteOFF, note, velocity);//turn note off
////    delay(200);//wait 200ms until triggering next note
//////////////////////////////////////////////////////////////////////////
////  }
////delay(0);
////}
//
//void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
//  Serial.write(command);//send note on or note off command
//  Serial.write(MIDInote);//send pitch data
//  Serial.write(MIDIvelocity);//send velocity data
//  delay(200);
// // loop();
//}
//
//void sendRF(int data) {
//  radio.write(&data, sizeof(data));
//}
//
//
////receiver:
////
////#include <SPI.h>
////#include <nRF24L01.h>
////#include <RF24.h>
////
////RF24 radio(7, 8);
////
////const byte address[6] = "00001";
////
////void setup() {
////  Serial.begin(9600);
////  radio.begin();
////  radio.openReadingPipe(0, address);
////  radio.setPALevel(RF24_PA_MIN);
////  radio.startListening();
////}
////
////void loop() {
////  if (radio.available()) {
////    int data;
////    radio.read(&data, sizeof(data));
////    Serial.println((int)data);
////  }
////}
