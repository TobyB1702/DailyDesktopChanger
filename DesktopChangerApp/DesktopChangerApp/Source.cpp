#include <string>
#include <iostream>
#include <Windows.h>

using namespace std; 


int main() {
	LPCWSTR test = L"C:\\Users\\user\\Pictures\\minion.png";
	int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (LPCWSTR *)test, SPIF_UPDATEINIFILE);


}