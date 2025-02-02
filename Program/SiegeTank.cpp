#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 30;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "Attack : " << attack << endl;
	cout << "Attack(Siege Mode) : " << attack + 40 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
	cout << endl;
}
