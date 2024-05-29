#include <iostream>
#include <string>
#include "air.h"

int main()
{
    airbus air1;
    air1.flight_object::display();
    air1.airliner::display();
    air1.airbus::display();

    return 0;
}
