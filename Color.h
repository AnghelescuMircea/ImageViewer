#pragma once

class Color
{
private:
	int red;
	int green;
	int blue;

public:
	Color() = delete;
	Color(int r, int g, int b);
	~Color();
	int getRed();
	int getGreen();
	int getBlue();
};
