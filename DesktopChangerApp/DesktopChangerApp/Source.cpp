#include <string>
#include <iostream>
#include <chrono>
#include <ctime>   
#include <Windows.h>

using namespace std; 

int randomWallpaperSelector() {

	int wallpaperNumber = rand() % 5 + 1;
	return wallpaperNumber;

}

void setWallpaper() {

	int wallpaperNumber = randomWallpaperSelector();
	string pathwayToImage = "C:\\Users\\tobyb\\source\\repos\\DailyDesktopChanger\\wallpapers\\";

	pathwayToImage += to_string(wallpaperNumber) += ".jpg";

	cout << pathwayToImage << endl;
	
	int result = SystemParametersInfo(
		SPI_SETDESKWALLPAPER,
		0,
		(void*)pathwayToImage.c_str(),
		SPIF_SENDCHANGE);

	cout << "Wallpaper set" << endl;

}

void computationTime() {
	auto start = std::chrono::system_clock::now();
	// Some computation here
	auto end = std::chrono::system_clock::now();

	time_t end_time = chrono::system_clock::to_time_t(end);

	cout << end_time << endl;

}


int main() {
	setWallpaper();
	computationTime();

	return 0;
}