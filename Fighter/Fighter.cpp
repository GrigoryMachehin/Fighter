#include "FighterLibrary.h"

void main()
{
	HANDLE WindowHigh = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD WindowSize = { 1080, 720 };
	SetConsoleScreenBufferSize(WindowHigh, WindowSize);

	setlocale(LC_ALL, "Rus");
	Intro();
	MainMenu(1);
}