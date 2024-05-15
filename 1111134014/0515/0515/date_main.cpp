// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "date.h" // Employee class definition
#include"pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949);
	Date adopt1(3, 12, 1988);
	pet pet1("BoBo", "Bluecat", birth, adopt1), 
		pet2("CoCo", "corax", birth, adopt1);
	pet1.print();
	pet2.print();

	cout << endl;
	
} // end main