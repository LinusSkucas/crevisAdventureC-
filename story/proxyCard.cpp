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
	char d;
	cardReader reader;
	string input;
	while (true)
	{
		cout << "> ";
		cin >> input;
		// find if exit
		if (input == "exit")
			break;
		if (input[8] == 'B')
		{
			connectB = true;
		}
		else if (input[8] == 'R')
		{
			connectR = true;
		}
		else if (input[8] == 'M')
		{
			if (reader.lookS1('1' == true))
			{
				connectM = true;
			}
			else
				print("Finish the proximity card chanllenge first!");
		}
		if (input[13] == 'B')
		{
			connectB = true;
		}
		else if (input[13] == 'R')
		{
			connectR = true;
		}
		else if (input [13] == 'M')
		{
			if (reader.lookS1('1' == true))
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
			cin >> d;
			if (d == 'P')
			{
				reader.changeS1('P', true);
				print("Connected! Now connect the negitive side!");
			}
			else if (d == 'N')
			{
				reader.changeS1('N', true);
				print("Connected! Now connect the positive side!");
			}

		}

	}
}
