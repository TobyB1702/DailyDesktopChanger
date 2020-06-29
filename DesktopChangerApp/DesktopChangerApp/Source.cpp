#include <string>
#include <iostream>
#include <chrono>
#include <ctime>   
#include <Windows.h>

using namespace std; 

void setWallpaper() {
	string pathwayToImage = "C:\\Users\\tobyb\\source\\repos\\DailyDesktopChanger\\wallpapers\\1.jpg";
	
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