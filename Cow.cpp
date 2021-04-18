// Cow.cpp
#include "Cow.h"
#include <string>

string Cow::Description() {
	return "[ Kind: Cow, Age: " + to_string(age) + ", Wool colour: " + wool_colour + ", Nickname: " + nickname + " ]";
}
