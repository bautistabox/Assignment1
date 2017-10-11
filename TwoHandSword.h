/*
* File:	TwoHandSword.h
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 11, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef TWOHANDSWORD_H
#define TWOHANDSWORD_H

/**
* Defines behavior of a two hand sword
* hitpoints = 80. 
**/

class TwoHandSword : public Weapon {
public:

	TwoHandSword() : Weapon("Two Hand Sword", 80) {}
	virtual ~TwoHandSword() {};
	virtual double hit(double armor);


};

#endif /* TWOHANDSWORD_H */