#include "proxyCard.h"
#include "functions.h"
#include "utilites.h"
#include <iostream>
using namespace std;

void cardReader::changeS1(char s, bool state)
{
	switch (s)
	{
	case 'P':
		firstProxy.connectedP = state;
		break;
	case 'N':
		firstProxy.connectedN = state;
		break;
	case '1':
		firstProxy.fin1 = state;
		break;
	default:
		break;
	}
}

void cardReader::changeS2(char s, bool state)
{
	switch (s)
	{
	case 'P':
		firstProxy.motorP = state;
		break;
	case 'N':
		firstProxy.motorN = state;
		break;
	case '1':
		firstProxy.fin2 = state;
		break;
	default:
		break;
	}
}

bool cardReader::lookS1(char s)
{
	switch (s)
	{
	case 'P':
		return firstProxy.connectedP;
		break;
	case 'N':
		return firstProxy.connectedN;
		break;
	case '1':
		return firstProxy.fin1;
		break;
	default:
		break;
	}
}

bool cardReader::lookS2(char s)
{
	switch (s)
	{
	case 'P':
		return firstProxy.motorP;
		break;
	case 'N':
		return firstProxy.motorN;
		break;
	case '1':
		return firstProxy.fin2;
		break;
	default:
		break;
	}
}

void connect()
{
	print("Welcome to the connect prompt!");
	print("Use B for battery, R for card reader. Also use M for motor");
	print("use _ (underscore) as a space");
	print("Follow this syntax: connect [B/R/M] to [B/R/M]");
	string wake = "connect";
	bool connectB = false;
	bool connectR = false;
	bool connectM = false;
	struct commandOutline
	{
		string connect;
		string obj1 = "";
		string to = "";
		string obj2 = "";
	};
	char d;
	cardReader reader;
	string input;
	commandOutline outline;
	bool exit = false;
	while (exit == false)
	{
		cout << "> ";
		//getline(cin, input);
		//n >> connect obj1 to obj2
		cin >> outline.connect >> outline.obj1 >> outline.to >> outline.obj2;
		// find if exit
		if (outline.obj1 == "B")
		{
			connectB = true;
		}
		else if (outline.obj1 == "R")
		{
			connectR = true;
		}
		else if (outline.obj1 == "M")
		{
			if (reader.lookS1('1') == true)
			{
				connectM = true;
			}
			else
				print("Finish the proximity card chanllenge first!");
		}
		if (outline.obj2 == "B")
		{
			connectB = true;
		}
		else if (outline.obj2 == "R")
		{
			connectR = true;
		}
		else if (outline.obj2 == "M")
		{
			if (reader.lookS1('1') == true)
			{
				connectM = true;
			}
			else
				print("Finish the proximity card chanllenge first!");
		}
		// connecting battery connected to reader
		if (connectB == true && connectR == true)
		{
			cout << "[P]ositive or [N]egitive" << endl;
			cout << "> ";
			cin >> d;
			if (d == 'P')
			{
				reader.changeS1('P', true);
				print("Connected! Now connect the negitive side!");
				string d;
				d = getInput("Do you want to exit? [Y]es [N]o.");
				if (d == "Y")
					exit = true;
			}
			else if (d == 'N')
			{
				reader.changeS1('N', true);
				print("Connected! Now connect the positive side!");
				string d;
				d = getInput("Do you want to exit? [Y]es [N]o.");
				if (d == "Y")
					exit = true;
			}

		}

	}
}
