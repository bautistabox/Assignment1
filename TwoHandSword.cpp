/*
* File:	TwoHandSword.cpp
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 11, 2017
*/

#include "TwoHandSword.h"

double TwoHandSword::hit(double armor) {

	double damage;

	damage = hitPoints - armor;

	if (damage > 0)
		return 0;
	else
		return damage;

}