#include <iostream>
#include <string>
#include"air.h"
using namespace std;
// 飛行物體類別 
int main()
{
    flight_object* flight,flightl;
    airliner airl;

    flight = &flightl;
    flight->display();

    flight = &airl;
    flight->display();

    return 0;
}