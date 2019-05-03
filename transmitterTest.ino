////transmitter :
//#include <SPI.h>
//#include "nRF24L01.h"
//#include "RF24.h"
//
//RF24 radio(9, 10);
//bool leftHand = true;
//int b1,b2,b3,b4,b5;
//void setup()
//{
//  
//  radio.begin();
//  radio.setRetries(15, 15);
//  radio.setPALevel(RF24_PA_MAX);
//  radio.openWritingPipe('00001');
//  radio.stopListening();
//
//  pinMode(4, INPUT_PULLUP);
//
//  pinMode(5, INPUT_PULLUP);
//
//  pinMode(6, INPUT_PULLUP);
//
//  pinMode(7, INPUT_PULLUP);
//  
//  pinMode(8, INPUT_PULLUP);
//
//  
//  Serial.begin(9600);
//}
//void loop()
//{
//  b1 = digitalRead(4);
//  b2 = digitalRead(5);
//  b3 = digitalRead(6);
//  b4 = digitalRead(7);
//  b5 = digitalRead(8);
//  if( leftHand){
//    if( b1 == HIGH)
//      sendRF(1);
//    if( b2 == HIGH)
//      sendRF(2);
//    if( b3 == HIGH)
//      sendRF(3);
//    if( b4 == HIGH)
//      sendRF(4);
//    if( b5 == HIGH)
//      sendRF(5);  
//    }
//  else{
//    if( b1 == HIGH)
//      sendRF(6);
//    if( b2 == HIGH)
//      sendRF(7);
//    if( b3 == HIGH)
//      sendRF(8);
//    if( b4 == HIGH)
//      sendRF(9);
//    if( b5 == HIGH)
//      sendRF(10);    
//  }
//}
//void sendRF(int data)
//{
//  radio.write(&data, sizeof(data));
//}
//
