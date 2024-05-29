// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<string>
#include "flight_object.h"
#include  "ship_object.h"
#include "airliner.h"
using namespace std;
// 飛行物體類別 


// 水上航行物體類別 

// 大型客機類別


int main()
{
    airliner air1;  // 兼具空中及水上功能   
    air1.flight_object::display();
    air1.display();

    return 0;
}