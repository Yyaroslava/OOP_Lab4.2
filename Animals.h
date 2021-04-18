// Animals.h
#pragma once
#include "Mammals.h"

class Animal : public Mammals {
protected:
	string wool_colour;
public:
	Animal(int _age, string _kind, string _wool_colour) : Mammals(_age, _kind) { wool_colour = _wool_colour; };
	~Animal() {};
};

