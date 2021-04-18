// Human.cpp
#include "Human.h"
#include <string>

string Human::Description() {
	return "[ Kind: Human, Age: " + to_string(age) + ", Name: " + name + " ]";
}
