#pragma once

// new function : connect input

void connect();

struct states
{
	// step one
	bool connectedP = false;
	bool connectedN = false;
	bool fin1 = false;

	// step two
	bool motorP = false;
	bool motorN = false;
	bool fin2 = false;
};

class cardReader
{
private:
	states firstProxy;

public:
	void changeS1(char s, bool state);
	void changeS2(char s, bool state);
	bool lookS1(char);
	bool lookS2(char);
};