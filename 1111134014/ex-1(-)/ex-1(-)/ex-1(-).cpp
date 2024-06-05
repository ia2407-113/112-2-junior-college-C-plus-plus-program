// ex-1(-).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include"air.h"

int main()
{
    flight_object* flight, flight1;
    airliner air1; 

    flight = &flight1;
    flight->display();

    flight = &air1;
    flight->display();

    //air1.flight_object::display();
    //air1.display();

    return 0;
}