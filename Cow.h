// Cow.h
#pragma once
#include "Animals.h"

class Cow : public Animal {
protected:
	string nickname;
public:
	Cow(int _age, string _wool_colour, string _nickname) : Animal(_age, "Cow", _wool_colour) { nickname = _nickname; };
	~Cow() {};
	virtual string Description();
};

