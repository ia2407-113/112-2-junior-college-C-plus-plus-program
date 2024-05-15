// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h" // Employee class definition
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949); Date birth1(5, 19, 1964); Date birth2(6, 24, 1951);
	Date adopt1(3, 12, 1958); Date adopt2(3, 12, 1972); Date adopt3(3, 13, 1952);
	Pet parroe1("肥肥", "非洲灰鸚鵡", birth, adopt1);
	Pet parroe2("胖胖", "亞馬遜鸚鵡", birth1, adopt2);
	Pet parroe3("壯壯", "金剛鸚鵡", birth2, adopt3);
	cout << endl;
	//manager.print();
} // end main