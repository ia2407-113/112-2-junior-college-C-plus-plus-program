#include <iostream>
#include <string>
#include "air.h"
using namespace std;
int main()
{
    flight_object* flight, flight1;
    airliner air1;
    flight = &flight1;
    flight->display();

    flight = &air1;
    flight->display();

    return 0;
}