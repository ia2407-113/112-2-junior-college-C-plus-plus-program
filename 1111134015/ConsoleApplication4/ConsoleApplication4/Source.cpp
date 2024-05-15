#include <iostream>
#include "Date.h"
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949),birth1(5,9,1974);
	Date hire(3, 12, 1988);
	Employee manager("Bob", "Blue", birth, hire);

	cout << endl;

} // end main
