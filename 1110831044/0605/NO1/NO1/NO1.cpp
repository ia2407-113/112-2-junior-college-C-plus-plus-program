#include <iostream>
#include <string>
#include"air.h"
using namespace std;
// 飛行物體類別 

int main()
{
    flight_object* flight, flight1;
    airliner air1;

    flight = &flight1;
    flight->display();

    flight = &air1;
    flight->display();

    //airliner air1;  // 兼具空中及水上功能   
    //air1.flight_object::display();
    //air1.display();

    return 0;
}
