/*
* File:	CrazyRandomSword.h
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
* Defines behavior of a crazy random sword
* hitpoints = random integer number between 10
* and 100. Ignores a random amount of integer
* armor points, ranging from to 0 to half of * the armor the weapon hits.
*/

class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy Random Sword", 0.0) {}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);


};

#endif /* SIMPLEAXE_H */