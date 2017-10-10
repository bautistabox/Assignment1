/*
* File:	SimpleAxe.h
* Author:	Alex Bautista <arb15s@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
* Defines behavior of a simple axe (hitpoints = 60.
* If armor is greater than 0 and less than 20,
* the axe will ignore all the armor points.
*/

class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple Axe", 60.0) {}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);


};

#endif /* SIMPLEAXE_H */