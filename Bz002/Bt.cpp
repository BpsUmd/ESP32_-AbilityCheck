// 
// 
// 

#include "Bt.h"

BluetoothSerial btSerial;

//*******************************************************************************************
bool InitBt(String strBtName)
{
	if (!btSerial.begin(strBtName))
		return false;
	else
		return true;
}


//*******************************************************************************************
std::string ESP32_BLSerial_ReadStrUntill(char chSeparateLetter)
{
	return btSerial.readStringUntil(chSeparateLetter).c_str();
}

//*******************************************************************************************
std::string ESP32_BLSerial_ReadString()
{
	return btSerial.readString().c_str();
}

//*******************************************************************************************
bool ESP32_BLSerial_Write(String strSendValue, bool blNewLine)
{
	try
	{
		if (blNewLine)
			//BT_Serial.println(strSendValue);
			btSerial.println(strSendValue);
		else
			//BT_Serial.print(strSendValue);
			btSerial.print(strSendValue);
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}

}

