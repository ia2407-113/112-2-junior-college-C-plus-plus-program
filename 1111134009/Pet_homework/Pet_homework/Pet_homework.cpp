
#include <iostream>
#include "date.h"
#include "pet.h" 
#include "Time.h"
using namespace std;

int main()
{
	Date birth1(7, 30, 2007), birth2(5, 9, 2009);
	Date adopt1(3, 26, 2006), adopt2(9, 20, 2010);
	Time morning1(7, 0, 0), night1(17, 0, 0);
	Time morning2(9, 30, 0), night2(20, 30, 0);
	Pet parrot1("小白", "阿拉斯加犬", birth1, adopt1, morning1,night1),
		parrot2("悠悠", "臘腸狗", birth2, adopt2, morning2, night2);

	cout << endl;
} 