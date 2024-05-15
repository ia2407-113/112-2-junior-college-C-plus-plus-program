// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h"// Employee class definition
#include"Date.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949), birth1(8, 30, 1985);
	Date adopt(3, 12, 1988), adopt1(9, 15, 1979);
	Pet manager("小白", "非洲大鸚鵡", birth, adopt), 
		manager1("小黑", "黑洲大鸚鵡", birth1,adopt1);

	cout << endl;
	manager.print();
	manager1.print();
	//manager.print();
} // end main
