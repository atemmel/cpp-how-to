#include "console.hpp"

#define WINVER 0x501
#include <windows.h>
#include <conio.h>

static int prevBackground = console::Black;
static int prevForeground = console::Lightgray;

namespace console {

void resize(int w, int h) {
	SMALL_RECT displayArea = {0, 0, 0, 0};
	displayArea.Right = w;
	displayArea.Bottom = h;
	COORD screenXy = {
		static_cast<short>(w + 1),
		static_cast<short>(h + 1),
	};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;

	GetConsoleScreenBufferInfo(hOut, &info);
	SetConsoleWindowInfo(hOut, TRUE, &displayArea);
	SetConsoleScreenBufferSize(hOut, screenXy);
}

void moveTo(int x, int y) {
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setCursorVisible(bool yes) {
	CONSOLE_CURSOR_INFO info;
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	info.bVisible = yes;
	SetConsoleCursorInfo(consoleHandle, &info);
}

bool keyboardHit() {
	return static_cast<bool>(_kbhit());
}

int getKeyPressed() {
	return static_cast<int>(_getch());
}

void textColor(int color) {
	prevForeground = color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color + (prevBackground << 4));
}

void backgroundColor(int color) {
	prevBackground = color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), prevForeground + (color << 4));
}

};
