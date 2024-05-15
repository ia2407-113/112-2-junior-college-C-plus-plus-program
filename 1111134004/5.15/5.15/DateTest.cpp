// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h" // Employee class definition
#include "Pet.h" 
using namespace std;

int main()
{
	Date birth1(7, 24, 1949);
	Date adopt1(3, 12, 1988);
	Date birth2(2, 24, 1950);
	Date adopt2(11, 12, 1960);
	Date birth3(2, 25, 1996);
	Date adopt3(11, 22, 2000);

    Pet member1( "Bob", "¶Àª÷Ây¤ü", birth1, adopt1 ),
		member2( "Ken", "«¢¤h©_", birth2, adopt2),
		member3("Cg", "¤gª¯", birth3, adopt3);

	cout << endl;
	member1.print();
	member2.print();
	member3.print();
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
