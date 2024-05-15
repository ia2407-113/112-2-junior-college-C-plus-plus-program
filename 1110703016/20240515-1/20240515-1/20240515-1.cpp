// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Employee class definition
using namespace std;

int main()
{
	Date birth1(7, 24, 1949);
	Date adopt1(3, 12, 1988);
	Date birth2(3, 16, 2020);
	Date adopt2(6, 12, 2022);
	Pet pet1("嘿嘿", "狗", birth1, adopt1);
	Pet pet2("丁丁", "貓", birth2, adopt2);

	cout << endl;
	pet1.print();
	pet2.print();
	cout << endl;
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
