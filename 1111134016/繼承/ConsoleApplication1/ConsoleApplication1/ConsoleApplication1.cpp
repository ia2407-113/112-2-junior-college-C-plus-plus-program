// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include"air.h"
using namespace std;
int main()
{
    airbus air1;
    air1.airliner::display();
    air1.flight_object::display();
    air1.display();
    

    return 0;
}
