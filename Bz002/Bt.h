// Bluetooth.h
#ifndef _Bluetooth_h
#define _Bluetooth_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
#endif

//******************************************************************
//******************************************************************

#define BT_SERIAL_BAUD_RATE 115200
#include <BluetoothSerial.h>
#include <exception>
using namespace std;


bool InitBt(String strBtName);
string ESP32_BLSerial_ReadStrUntill(char chSeparateLetter);
string ESP32_BLSerial_ReadString();
bool ESP32_BLSerial_Write(String strSendValue, bool blNewLine);