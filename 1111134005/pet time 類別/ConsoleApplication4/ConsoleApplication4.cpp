#include <iostream>
#include "date.h"
#include "pet.h" // Employee class definition
#include "Time.h"
using namespace std;

int main()
{
	Date birth1(7, 24, 2015), birth2(5, 9, 2018);
	Date adopt1(3, 12, 2016), adopt2(7, 15, 2018);
	Time morning1(8, 0, 0), night1(18, 0, 0);
	Time morning2(8, 30, 0), night2(18, 30, 0);
	Pet parrot1("乖乖", "拉不拉多犬", birth1, adopt1, morning1, night1),
		parrot2("皮皮", "黃金獵犬", birth2, adopt2, morning2, night2);

	//manager.print();

	cout << endl;
	//manager.print();
}	// end main