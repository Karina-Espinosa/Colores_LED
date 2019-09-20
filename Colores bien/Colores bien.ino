


#include <BluetoothSerial.h>
#include "RGB_Bien.h"
#include <Useful_Methods.h>
#include <LED_Handler.h>
#include <ADC_Read.h>
PWM pwm;
ulong start_time;
uint16_t delay_period = 500;
uint8_t CLED;
uint8_t i;
String string_in;
uint8_t rgb_pins[3] = { 0,1,2 };
uint8_t rgb_channels[3] = { 0,1,2 };
RGB rgb(rgb_pins, rgb_channels, LOW);
float data_in[3];
BluetoothSerial Serialbt;


void setup()
{
	Serial.begin(115200);
	Serialbt.begin("LED_RGB_KarinaMarco");
}



// Add the main program code into the continuous loop() function
void loop()
{
	if (Serialbt.available())
	{
		string_in = Serialbt.readStringUntil('\n');
		parseString(string_in, ",", data_in);
		rgb.setColor(data_in[0], data_in[1], data_in[2]);
		

	}
}