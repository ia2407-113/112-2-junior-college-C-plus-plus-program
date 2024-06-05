#include <iostream>
#include <string>
#include"Air.h"
using namespace std;

int main()
{
    airliner air1;
    air1.flight_object::display();
    air1.airliner:: display_airliner();
    air1.display();
    return 0;
}
