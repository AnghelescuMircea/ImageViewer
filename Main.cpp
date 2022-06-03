#include "AppWindow.h"
#include "Image.h"

int main(int argc, char* argv[])
{
	AppWindow appWindow;
	Image image(640, 480);

	appWindow.mainMenu(image);

	return 0;
}
