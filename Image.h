#pragma once
#include "Color.h"
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

class Image
{
private:
	std::vector<Color> image;
	int width, height;
	const char* fileName;
	const char* location;
	const int bytesPerPixel = 3;
	const int BMPHeaderSize = 14;
	const int DIBHeaderSize = 40;

public:
	Image() = delete;
	Image(int w, int h);
	void generateBMP(int algorithm, const char* fileName, const char* location);
	unsigned char* createBMPHeader(int height, int stride);
	unsigned char* createDIBHeader(int width, int height);
	void algorithm1();
	void algorithm2();
	void algorithm3();
	void algorithm4();
	void algorithm5();
	void insertAlg(std::string text, std::string text2);
};
