#pragma once

namespace console {

// Resizes the console window, inputs are the new width and height
void resize(int w, int h);

// Moves the console cursor, inputs are the new X and Y position
void moveTo(int x, int y);

// Sets whether the cursor is visible or not, inputs are true/false
void setCursorVisible(bool yes);

// Checks if a single key was just pressed
bool keyboardHit();

// Checks which key is currently pressed
int getKeyPressed();

// Arrow key codes
enum : int {
	Up = 72,
	Down = 80,
	Left = 75,
	Right = 77,
};

// Sets new text color, inputs are one of the colors above
void textColor(int color);

// Sets new background color, inputs are one of the colors above
void backgroundColor(int color);

// Available colors to use
enum : int {
	Black,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Brown,
	Lightgray,
	Darkgray,
	Lightblue,
	Lightgreen,
	Lightcyan,
	Lightred,
	Lightmagenta,
	Yellow,
	White,
};

};
