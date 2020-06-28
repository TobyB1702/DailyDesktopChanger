#include <string>
#include <iostream>
#include <chrono>
#include <ctime>   
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

void currentTime() {
	auto start = std::chrono::system_clock::now();
	// Some computation here
	auto end = std::chrono::system_clock::now();

	//chrono::duration<double> elapsed_seconds = end - start;
	time_t end_time = chrono::system_clock::to_time_t(end);

	cout << end_time << endl;

//	std::cout << "finished computation at " << std::ctime(&end_time)
//		<< "elapsed time: " << elapsed_seconds.count() << "s\n";
}


int main() {
	setWallpaper();
	currentTime();

	return 0;
}