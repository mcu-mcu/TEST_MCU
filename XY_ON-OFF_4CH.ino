/*
   -- ON_OFF 4CH --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 2.4.3 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.3.1 or later version;
     - for iOS 1.3.5 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__SOFTSERIAL
#include <SoftwareSerial.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL_RX 2
#define REMOTEXY_SERIAL_TX 3
#define REMOTEXY_SERIAL_SPEED 9600


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,4,0,0,0,91,0,8,13,1,
  2,0,16,18,30,13,2,26,31,31,
  79,78,0,79,70,70,0,2,0,16,
  35,30,13,162,26,31,31,79,78,0,
  79,70,70,0,2,0,16,52,30,13,
  190,26,31,31,79,78,0,79,70,70,
  0,2,0,16,69,30,13,1,26,31,
  31,79,78,0,79,70,70,0,129,0,
  9,6,46,7,205,79,78,47,79,70,
  70,32,52,32,67,72,46,0 };
  
// this structure defines all the variables of your control interface 
struct {

    // input variable
  uint8_t sw_1; // =1 if switch ON and =0 if OFF 
  uint8_t sw_2; // =1 if switch ON and =0 if OFF 
  uint8_t sw_3; // =1 if switch ON and =0 if OFF 
  uint8_t sw_4; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_SW_1 13
#define PIN_SW_2 13
#define PIN_SW_3 13
#define PIN_SW_4 13


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SW_1, OUTPUT);
  pinMode (PIN_SW_2, OUTPUT);
  pinMode (PIN_SW_3, OUTPUT);
  pinMode (PIN_SW_4, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_SW_1, (RemoteXY.sw_1==0)?LOW:HIGH);
  digitalWrite(PIN_SW_2, (RemoteXY.sw_2==0)?LOW:HIGH);
  digitalWrite(PIN_SW_3, (RemoteXY.sw_3==0)?LOW:HIGH);
  digitalWrite(PIN_SW_4, (RemoteXY.sw_4==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer


}


