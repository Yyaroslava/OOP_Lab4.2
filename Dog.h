// Dog.h
#pragma once
#include "Animals.h"

class Dog : public Animal {
protected:
	string breed;
public:
	Dog(int _age, string _wool_colour, string _breed) : Animal(_age, "Dog", _wool_colour) { breed = _breed; };
	~Dog() {};
	virtual string Description();
};

