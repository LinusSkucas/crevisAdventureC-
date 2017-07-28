#include "envping.h"
#include "utilites.h"

void look::keyChange(int chan, bool change)
{
	switch (chan)
	{
	case 1:
		keyCollection.chan1 = change;
		break;
	case 2:
		keyCollection.chan2 = change;
		break;
	case 3:
		keyCollection.chan3 = change;
		break;
	case 4:
		keyCollection.chan4 = change;
		break;
	case 5:
		keyCollection.chan5 = change;
		break;
	default:
		print("There was an error.");
		break;
	}
}

bool look::keyLook(int chan)
{
	switch (chan)
	{
	case 1:
		return keyCollection.chan1;
		break;
	case 2:
		return keyCollection.chan2;
		break;
	case 3:
		return keyCollection.chan2;
		break;
	case 4:
		return keyCollection.chan2;
		break;
	case 5:
		return keyCollection.chan2;
		break;
	default:
		break;
	}
}

string look::distLook(int env)
{
	switch (env)
	{
	case 1:
		return description.env1;
		break;
	case 2:
		return description.env2;
		break;
	case 3:
		return description.env3;
		break;
	case 4:
		return description.env4;
		break;
	case 5:
		return description.env5;
		break;
	default:
		break;
	}
}
