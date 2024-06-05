// 0605.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

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
    air1.create_airliner();
    flight->display();

    flight = &battle1;  // flight指向battle1的位址 
    flight->create_flight_object();
    battle1.create_battleplane();
    flight->display();

    return 0;
}