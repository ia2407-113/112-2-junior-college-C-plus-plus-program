#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();
    cout << "父類別的製造者:"
        << air1.flight_object::manufacturer<< endl;

    return 0;
}