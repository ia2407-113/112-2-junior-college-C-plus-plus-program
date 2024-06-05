#include <iostream>
#include <string>
#include"air.h"

using namespace std;

int main()
{
    flight_object* flight;
    airliner air1;
    battleplane battle1;

    flight = &air1;  // flight指向air1的位址 
    flight->create_flight_object();
    air1.create_airliner(); //輸入flight資料
    flight->display(); //輸出flight資料
 
    flight = &battle1;  // flight指向battle1的位址 
    flight->create_flight_object();
    battle1.create_battleplane(); //輸入battle資料
    flight->display(); //輸出battle資料

    return 0;
}