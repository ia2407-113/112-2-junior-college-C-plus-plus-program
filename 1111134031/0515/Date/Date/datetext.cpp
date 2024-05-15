// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "date.h" // Employee class definition
#include"pet.h"
using namespace std;

int main()
{
	Date birth(3, 12, 2006);
	Date brith2(9,23,1979);
	Date adopt(3, 12, 2006);
	Date adopt2(3, 12, 1988);
	Pet manager("麻糬", "Labrador", birth, adopt);
	Pet manager1("Jamie Oliver", "human", brith2, adopt2);

	cout << endl;
	manager.print();
} // end main

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/