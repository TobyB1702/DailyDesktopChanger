#include <string>
#include <iostream>
#include <Windows.h>

using namespace std; 

void setWallpaper() {
	LPCWSTR pathwayToImage = L"C:\\Users\\user\\source\\repos\\DailyDesktopChanger\\test.JPG";
	
	int result = SystemParametersInfo(
		SPI_SETDESKWALLPAPER,
		0,
		(LPCWSTR *)pathwayToImage,
		SPIF_UPDATEINIFILE);

	cout << result << endl;

	if (result)
	{
		std::cout << "Wallpaper set";
	}
	else
	{
		std::cout << "Wallpaper not set";

	}

}


int main() {
	setWallpaper();
	return 0;
}