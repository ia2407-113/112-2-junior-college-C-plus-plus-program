#include <iostream>
#include <string>
#include "air.h"

int main()
{
    airbus air1;
    air1.flight_object::display();
    air1.airliner::display_airliner();
    air1.display();

    return 0;
}
