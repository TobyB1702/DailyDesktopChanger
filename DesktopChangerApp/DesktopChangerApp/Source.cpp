#include <string>
#include <iostream>
#include <Windows.h>

using namespace std; 

void setWallpaper() {
	string pathwayToImage = "C:\\Users\\tobyb\\source\\repos\\DailyDesktopChanger\\test.JPG";
	
	int result = SystemParametersInfo(
		SPI_SETDESKWALLPAPER,
		0,
		(void*)pathwayToImage.c_str(),
		SPIF_SENDCHANGE);

	cout << "Wallpaper set" << endl;

}


int main() {
	setWallpaper();
	return 0;
}