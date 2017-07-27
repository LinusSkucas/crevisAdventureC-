#include "functions.h"
#include "utilites.h"
#include <cstdlib>
#include <chrono>
#include <windows.h>
void startChat()
{
	print("Hello world");
}

void loading()
{
	print("Loading level...");
	int percent = 0;
	while (percent <95)
	{
		srand(time(NULL));
		int random_integer = rand() % 10 + 1;
		percent = percent + random_integer;
		cout << percent << " %" << endl;
		Sleep(random_integer*59);
	}
	Sleep(598);
	print("100 %");
	print("Done!");
	system("pause");
	system("CLS");

}

char getInput(string prompt)
{
	char output;
	cout << prompt << endl;
	cout << "> ";
	cin >> output;
	return output;
}

void print(string stuff)
{
	cout << stuff << endl;
}
