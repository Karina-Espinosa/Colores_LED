// RGB_Bien.h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
#define ON 1
#define OFF 1
#include <PWM_ESP32.h>

class RGB
{
public:
	RGB(uint8_t rgb_pins[3], uint8_t rgb_channels[3], bool on_state);
	~RGB();
	void setColor(uint8_t red, uint8_t green, uint8_t blue);
	void setColor(uint8_t color);

protected:
	PWM pwmR;
	PWM pwmG;
	PWM pwmB;
	bool _on_state;
};
