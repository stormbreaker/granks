#ifndef TDBK_COMMON_H
#define TDBK_COMMON_H
#include <string>

struct Color
{
    int red;
    int green;
    int blue;
};

struct Texture
{
	int height = 0;
	int width = 0;
	std::string path = "";
	unsigned char* imageDataArray = nullptr;
};

// Helpful constants for key presses
const int ESC_KEY = 27;

extern float AnimateIncrement;

#endif
