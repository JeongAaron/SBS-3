#include "Terran.h"

Terran::Terran()
{
	attack = 0;
	health = 0;
	defense = 0;
}

void Terran::Stats()
{
	cout << "Attack : " << attack << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
	cout << endl;
}
