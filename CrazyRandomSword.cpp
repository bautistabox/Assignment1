/*
* File:	CrazyRandomSword.cpp
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <time.h>

double CrazyRandomSword::hit(double armor) {
	
	double damage;
	int bork = armor / 2;
	srand(time(0));
	int randomHit = rand() % (100 - 10 + 1) + 10;
	int randomArmor = rand() % bork + 1;

	damage = randomHit - randomArmor;

	if (damage > 0)
		return 0;
	else
		return damage;

}