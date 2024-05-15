#include <iostream>
#include "DATE.h"
#include"pet.h"//引進
using namespace std;

int main()
{
	Date birth(7, 24, 1949),birth1(5,9,1974);
	Date adopt1(3, 12, 1988),adopt2(5,9,1974);
	Pet parrot1("胖子", "灰鸚鵡", birth, adopt1),
		parrot2("矮子", "黑鸚鵡", birth, adopt2);
	cout << endl;
} 