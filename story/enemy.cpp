#include "enemy.h"

void enemy::setWants(string needs)
{
	wants = needs;
}

void enemy::visable(bool isHidden)
{
	if (isHidden)
		isHidden = false;
	else
		isHidden = true;

}

void enemy::block(bool blocked)
{
	// unblock player if blocked
	if (blocked)
		blocked = false;
	// block player if unblocked or error
	else
		blocked = true;
}
void enemy::existsing(bool exists)
{
	// if exists make not
	if (exists)
		exists = false;
	else
		exists = true;
}


// PUBLIC things

string enemy::getWants()
{

	return wants;
}

bool enemy::isHiding()
{
	return hidden;
}

bool enemy::isBlocking()
{
	return blockPlayer;
}

bool enemy::living()
{
	return inWorld;
}
