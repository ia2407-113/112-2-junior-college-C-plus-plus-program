// Demonstrating composition--an object with member objects.
#include <iostream>
#include "date.h"
#include "pet.h" // Employee class definition
#include "time.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949), birth1(5, 9, 1974);
	Date adopt1(3, 12, 1988), adopt2(5, 9, 1974);
	Time feed1(8, 30, 0), feed2(14, 45, 0);
	Pet parrot1("肥肥", "非洲灰鸚鵡", birth, adopt1 , feed1),
		parrot2("壯壯", "亞馬遜鸚鵡", birth1, adopt2 , feed2);

	//manager.print();
	cout << "Parrot 1 details:" << endl;
	parrot1.print();
	cout << endl;

	cout << "Parrot 2 details:" << endl;
	parrot2.print();
	cout << endl;
	//manager.print();
} // end main