#include "looks.h"


char room::space(int room, char goodPath)
{
	char input;
	cout << "> ";
	cin >> input;
	switch (input)
	{
	case 'Y':
	case 'y':
		cout << lookCommand.distLook(room) << endl;
		lookCommand.keyChange(room, true);
		return goodPath;
		break;

	default:
		return input;
		break;
	}

}