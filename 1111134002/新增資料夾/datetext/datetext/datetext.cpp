// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h" // Employee class definition
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949); Date birth1(5, 19, 1964);
	Date adopt1(3, 12, 1958); Date adopt2(3, 12, 1972);
	Date birth3(3, 12, 1958); Date adopt3(3, 12, 1972);
	Pet parroe1("Luffy", "monkey", birth, adopt1);
	Pet parroe2("Chopper", "馴鹿", birth1, adopt2);
	Pet parroe3("Sanji", "dog", birth3, adopt3);
	cout << endl;
	//manager.print();
} // end main