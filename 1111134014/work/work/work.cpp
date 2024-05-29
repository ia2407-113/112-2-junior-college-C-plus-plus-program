

#include <iostream>
#include <string>
#include"air.h"
using namespace std;

int main()
{
    airbus air1;
    air1.display();
    air1.display_airliner();
    air1.airliner::display();

    return 0;
}
