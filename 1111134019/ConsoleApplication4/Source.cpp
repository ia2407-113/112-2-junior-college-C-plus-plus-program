#include <iostream>
#include "Date.h" 
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949);
	Date hire(3, 12, 1988);
	Employee xanager("Bob", "Blue", birth, hire);

	cout << endl;

} // end main
