#include <iostream>
#include <string>
#include"aaa.h"
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
    
    return 0;
}
