#include "FighterLibrary.h"

void sound(int switcher)
{
	AudioDevicePtr device = OpenDevice();

	OutputStreamPtr MK = OpenSound(device, "MK.mp3", false);

	if (switcher == 1) MK->play();
}