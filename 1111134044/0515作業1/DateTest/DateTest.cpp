#include <iostream>
#include "Date.h" // Employee class definition
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949), birth1(9, 23, 2005);
	Date adopt(3, 12, 1988),adopt1(4,13,1999);
	Pet manager("Teddy", "black", birth, adopt);
	Pet manager1("NIIGA", "white", birth, adopt1);
	cout << endl;
	manager.print();
	manager1.print();
} // end main
