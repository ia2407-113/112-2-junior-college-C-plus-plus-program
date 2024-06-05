#include <iostream>
#include <string>
#include"aaa.h"
using namespace std;
// 飛行物體類別,是一種抽象類別 

int main()
{
    flight_object* flight;
    
    battleplane battle1;

    

    flight = &battle1;  // flight指向battle1的位址 
    flight->create_flight_object();
    battle1.create_battleplane();
    flight->display();

    return 0;
}
