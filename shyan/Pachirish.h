#pragma once
#include "Pokemon.h"
class Pachirish:public Pokemon 
{
public:
	Pachirish();
	Pachirish(int a, int b, int c, int d, int e);
	void Cut();
	void Eat();
	void Skill();
	void Surf();
};