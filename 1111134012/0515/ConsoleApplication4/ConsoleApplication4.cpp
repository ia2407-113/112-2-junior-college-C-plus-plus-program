#include <iostream>
#include "date.h"
#include "pet.h"
using namespace std;

int main()
{
	Date birth(7, 24, 1949); 
	Date adopr2(6, 23, 1965);
	Date adopt1(3, 12, 1988);
	Employee manager("踢踢", "邊牧", birth, adopt1);
	Employee hjr("絲絲", "哈士奇", birth, adopr2);
    manager.print();

	cout << endl;
	
} 