﻿#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    flight_object* flight;
    battleplane battle1;

    flight = &battle1;  // flight指向battle1的位址 
    flight->create_flight_object();
    battle1.create_battleplane();
    flight->display();
    flight->afterburner();

    return 0;
}