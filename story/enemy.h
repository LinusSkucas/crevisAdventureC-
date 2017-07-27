#pragma once
#include <iostream>

using namespace std;

enum wantTypes {food, money, potions};

enum foodTypes { bread, cake, water, meatloaf};
enum moneyTypes { gold, diamonds, copper };
enum potionTypes { Healing, Harming };

class enemy
{
	private:
		string wants;
		bool hidden;
		bool blockPlayer;
		bool inWorld;

	protected:
		void setWants(string needs);
		void visable(bool isHidden);
		void block(bool blocked);
		void existsing(bool exists);

	public:
		string getWants();
		bool isHiding();
		bool isBlocking();
		bool living();
};