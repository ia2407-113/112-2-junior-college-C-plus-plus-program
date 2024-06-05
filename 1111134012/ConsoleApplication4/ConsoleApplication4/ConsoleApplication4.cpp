#include <iostream>
#include <string>
using namespace std;
#include "Header.h"
int main()
{
	flight_object* flight,flight1;
	airliner air1;

	flight = &flight1;
	flight->display();

	flight = &air1;
	flight->display();


	//air1.flight_object::display();
	//air1.display();

	return 0;
}
