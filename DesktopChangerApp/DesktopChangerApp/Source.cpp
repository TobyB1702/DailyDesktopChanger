#include <string>
#include <iostream>
#include <chrono>
#include <ctime>   
#include <Windows.h>

using namespace std; 

int randomWallpaperSelector() {
	srand((unsigned int)time(NULL));
	return rand() % 30 + 1;

}

void setWallpaper() {

	int wallpaperNumber = randomWallpaperSelector();
	string pathwayToImage = "C:\\Users\\tobyb\\source\\repos\\DailyDesktopChanger\\wallpapers\\";

	pathwayToImage += to_string(wallpaperNumber) += ".jpg";

	
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