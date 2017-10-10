/*
* File:	SimpleAxe.cpp
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	double damage;
	if (armor > 0 && armor < 20) 
		damage = hitPoints;
	else 
		damage = hitPoints - armor;
	
	if (damage < 0)
		return 0;
	else
		return damage;
}