// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h"
#include "pet.h" // Employee class definition
using namespace std;

int main()
{
	Date birth(7, 24, 1949), birth1(5, 9, 1974);
	Date adopt1(3, 12, 1988), adopt2(5, 9, 1974);
	pet manager1("劉吱吱", "猴子", birth, adopt1),
		manager2("陳彥旻", "山豬", birth1, adopt2);

	cout << endl;
	//manager.print();
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

