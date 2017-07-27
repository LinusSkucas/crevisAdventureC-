#include "looks.h"

look lookCommand;
char room::space(int room)
{
	char input;
	//cout << "> ";
	cin >> input;
	switch (input)
	{
	case 'Y':
	case 'y':
		cout << lookCommand.distLook(room) << endl;
		lookCommand.keyChange(room, true);
		break;

	default:
		return input;
		break;
	}

}