#include <iostream>
#include <string>
using namespace std;
#include "Header.h"
// 飛行物體類別

int main()
{
    flight_object* flight, flight1;
    airliner air1;
    flight = &flight1;
    flight->display();
    flight= & air1;
    flight->display();

    return 0;
}