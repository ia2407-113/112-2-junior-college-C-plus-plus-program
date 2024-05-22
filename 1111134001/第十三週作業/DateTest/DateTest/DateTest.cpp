// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h"
#include "pet.h" // Employee class definition
using namespace std;

int main()
{
	Date birth(7, 24, 1949),birth1(5,9,1974);
	Date adopt(3, 12, 1988),adopt1(1,24,1997);
	Pet manager1("小白", "土狗", birth, adopt);
	manager1.print();
	Pet manager2("小黑", "拉不拉多", birth1, adopt1);
	manager2.print();
	cout << endl;
} // end main