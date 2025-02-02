#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int attack;
	int health;
	int defense;
public:
	Terran();
	virtual void Stats();
};

