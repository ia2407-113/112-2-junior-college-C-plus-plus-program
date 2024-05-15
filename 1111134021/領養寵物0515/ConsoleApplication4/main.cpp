#include <iostream>
#include "Date.h"
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 2022);
	Date adoptd(3, 12, 2023);

	Date birth2(7, 20, 2022);
	Date adoptd2(3, 15, 2023);

	pet adopt1("©Ô©Ô", "©Ô¤£©Ô¦h", birth, adoptd);
	pet adopt2("¶Àª÷", "¶Àª÷Ây¤ü", birth2, adoptd2);

	adopt1.print();
	cout << endl;
	adopt2.print();
}