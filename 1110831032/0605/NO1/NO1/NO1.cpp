#include <iostream>
#include <string>
#include "flight_objects.h"

int main() {
   
    //airliner air1;  // 兼具空中及水上功能   
    //air1.flight_object::display();
    //air1.display();

    flight_object* flight, flightl;
    airliner airl;

    flight = &flightl;
       flight->display();

        flight = &airl;
        flight->display();
    return 0;
}