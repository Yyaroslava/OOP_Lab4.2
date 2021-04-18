// Mammals.h
#pragma once
#include <iostream>

using namespace std;

class IDescription {
public:
	virtual string Description() = 0;
};

class Mammals : public IDescription {
protected:
	int age;
	string kind;
public:
	Mammals(int _age, string _kind) { age = _age; kind = _kind; };
	friend ostream& operator << (ostream&, Mammals&);
	~Mammals() {};
};

typedef Mammals* MammalsPtr;

