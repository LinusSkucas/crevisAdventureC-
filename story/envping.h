#pragma once
#include "envping.h"
#include "utilites.h"

struct keys
{
	bool chan1 = false;
	bool chan2 = false;
	bool chan3 = false;
	bool chan4 = false;
	bool chan5 = false;
};

struct dist
{
	string env1 = "There are some matches and food on the ground.\nYou reach down and pick up the matches and food.";
	string env2 = "On the ground there is a tool box.\nYou pick up the tool box and open it.\nInside the tool box there is a small hammer, pliers, wire stripers, wire, proximity card, battery and light.";
	string env3 = "";
	string env4 = "";
	string env5 = "";

};

class look
{
private:
	keys keyCollection;
	dist description;

public:

	void keyChange(int chan, bool change);
	bool keyLook(int chan);
	string distLook(int env);
};
