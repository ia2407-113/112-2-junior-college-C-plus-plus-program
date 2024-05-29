#include <iostream>
#include <string>
#include"air.h"
using namespace std;
// 飛行物體類別 

int main()
{
    airbus air1;
    air1.flight_object::display();
    air1.airliner::display();
    air1.display();
    return 0;
}