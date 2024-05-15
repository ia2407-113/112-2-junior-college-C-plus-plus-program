#include <iostream>
#include "date.h" // Employee class definition
#include "pet.h" // Employee class definition

using namespace std;

int main()
{
	Date birth(7, 24, 2019);
	Date adopt(3, 12, 2020);
	Date birth1(7, 24, 2022);
	Date adopt1(3, 12, 2023);

	pet hamster("¶Àª÷¹«", "ham", birth, adopt);
	pet hamster1("ª÷µ·ºµ", "ºµºµ", birth1, adopt1);

	cout << endl;
	hamster.print();
	hamster1.print();
} // end main