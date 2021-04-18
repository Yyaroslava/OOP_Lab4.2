// Mammals.cpp
#include "Mammals.h"

ostream& operator << (ostream& out, Mammals& m) {
	out << m.Description();
	return out;
}
