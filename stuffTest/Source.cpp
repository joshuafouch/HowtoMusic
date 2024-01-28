#include <iostream>
#include <Windows.h>
using namespace std;

#pragma comment(lib, "winmm.lib")

int main()
{
	cout << "Playing music \n";

	PlaySound(TEXT("goffybeat.wav"), NULL, SND_FILENAME | SND_ASYNC);

	cout << "How is your day?" << endl;
	int choice;
	cin >> choice;

	cout << "heh...";

	for (int i = 0; i <= 100; i++)
	{
		cout << "bruh moment..." << endl;
	}

	cout << "ok bye;";
	cout << "ok bye my friend";

	return 0;
}