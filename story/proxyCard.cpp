#include "proxyCard.h"

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

