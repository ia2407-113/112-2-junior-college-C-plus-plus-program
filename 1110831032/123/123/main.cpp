#include <iostream>
#include <string>
#include "flight_objects.h"

int main() {
    flight_object* flight;
    airliner air1;
    battleplane battle1;

    flight = &air1;  // flight ���V air1 ����} 
    flight->create_flight_object();
    air1.create_airliner();
    flight->display();

    flight = &battle1;  // flight ���V battle1 ����} 
    flight->create_flight_object();
    battle1.create_battleplane();
    flight->display();

    return 0;
}
