﻿#include <iostream>
#include <string>
#include"air.h"
using namespace std;

int main()
{
    airliner air1;  // 兼具空中及水上功能
    flight_object* flight, flight1;

    flight = &flight1;
    flight->display();
    flight = &air1;
    flight->display();

    //air1.flight_object::display();
    //air1.display();

    return 0;
}
