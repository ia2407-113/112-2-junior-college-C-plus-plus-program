// Fig. 9.18: Date.cpp
// Date class member-function definitions.
#include <iostream>
#include "Date.h" // Employee class definition
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949);
	Date hire(3, 12, 1988);
	Employee manager("bob", "blue", birth, hire);

	cout << endl;

} // end main