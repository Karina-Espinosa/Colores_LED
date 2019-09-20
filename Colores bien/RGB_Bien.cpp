// 
// 
// 

#include "RGB_Bien.h"


RGB::RGB(uint8_t rgb_pins[3], uint8_t rgb_channels[3], bool on_state)
{
	pwmR.setup(rgb_pins[0], rgb_channels[0], 1000, 8, on_state);
	pwmG.setup(rgb_pins[1], rgb_channels[1], 1000, 8, on_state);
	pwmB.setup(rgb_pins[2], rgb_channels[2], 1000, 8, on_state);
	_on_state = on_state;
}

RGB::~RGB()
{

}

void RGB::setColor(uint8_t red, uint8_t green, uint8_t blue)
{
	pwmR.setBits(red);
	pwmG.setBits(green);
	pwmB.setBits(blue);
}

void RGB::setColor(uint8_t color)
{
}

