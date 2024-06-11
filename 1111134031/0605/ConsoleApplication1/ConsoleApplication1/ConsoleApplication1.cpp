#include <iostream>
#include <string>
#include"Air.h"
using namespace std;
// 飛行物體類別 


int main()
{
    airliner air1;  // 兼具空中及水上功能   
    flight_object *flight, flight2;
    flight = &flight2;
    flight->display();

    flight = &air1;
    flight->display();


    //air1.flight_object::display();
    //air1.display();

    return 0;
}
