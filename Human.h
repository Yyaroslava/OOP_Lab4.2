// Human.h
#pragma once
#include "Mammals.h"
#include <time.h>

class Human : public Mammals {
protected:
	string name;
public:
	Human(int _age, string _name) : Mammals(_age, "Human") { name = _name; };
	~Human() {};
	virtual string Description();
};

