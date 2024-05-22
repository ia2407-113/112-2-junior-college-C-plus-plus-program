#include <iostream>
#include "Date.h"
#include "Pet.h" 
#include "Time.h"

using namespace std;

int main()
{
	Date birth(7, 24, 1949), birth1(5, 9, 1974);
	Date adopt1(3, 12, 1988), adopt2(5, 9, 1974);
	Time feed1(4, 30, 0), feed2(12, 0, 0);
	Pet parrot1("肥肥", "非洲灰鸚鵡", birth, adopt1, feed1),
		parrot2("壯壯", "亞馬遜鸚鵡", birth1, adopt2, feed2);

   cout << endl;
	
} 