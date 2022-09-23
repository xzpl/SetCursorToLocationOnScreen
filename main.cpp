#include "config.h"


// Sets cursor postion to your value
int setCursor(int cX, int cY)
{
	int ScreenX = GetSystemMetrics(SM_CXSCREEN);
	int ScreenY = GetSystemMetrics(SM_CYSCREEN);
	
	if (cX > ScreenX)
	{
		std::cout << "The X postion is greater then the screen size " << ScreenX << " please lower it";
		return 1;
	}
	else if(cY > ScreenY)
	{
		std::cout << "The Y postion is greater than the screen size " << ScreenY << " please lower it";
		return 1;
	}

	POINT cursor;			// Create point for cursor
	GetCursorPos(&cursor);	// Get the current cursor postion
	SetCursorPos(cX, cY);	// Set the cursor postion to what you want to
	return 0;				// Program has ran sucessfully
}

int main()
{
	int cX, cY;
	cX = 1000;	// The X postion
	cY = 600;	// The Y postion
	setCursor(cX, cY);
}
