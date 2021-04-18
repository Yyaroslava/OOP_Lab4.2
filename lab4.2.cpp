// lab4.2
#include <iostream>
#include "Human.h" 
#include "Animals.h"
#include "Mammals.h"
#include "Dog.h"
#include "Cow.h"

using namespace std;

void ShowMammals(MammalsPtr* M) {
	cout << "Using polymorphic function call: Description() " << endl;
	for (int i = 0; i < 3; i++) {
		cout << (*(M + i))->Description() << endl;
	}
}

int main() {
	Human A(34, "Neil");
	cout << A << endl;

	Dog B(3, "Brown", "Pitbull");
	cout << B << endl;

	Cow C(4, "Black", "Maru");
	cout << C << endl;

	MammalsPtr M[3];
	M[0] = &A;
	M[1] = &B;
	M[2] = &C;

	ShowMammals(M);
}
