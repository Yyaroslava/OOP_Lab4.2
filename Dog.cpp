// Dog.cpp
#include "Dog.h"
#include <string>

string Dog::Description() {
	return "[ Kind: Dog, Age: " + to_string(age) + ", Wool colour: " + wool_colour + ", Breed: " + breed + " ]";
}
