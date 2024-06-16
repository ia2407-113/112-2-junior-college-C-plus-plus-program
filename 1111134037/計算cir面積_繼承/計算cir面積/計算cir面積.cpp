// 計算cir面積.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include "cylinder_3D.h"
#include "cron_3D.h"



int main()
{
    pie_2D pie;
    std::cout << "請輸入半徑:";
    std::cin >> pie.radius;
    std::cout << "圓餅面積:=" << pie.compute_circ() << "\n";

    cylinder_3D cylinder;
    std::cout << "請輸入半徑:";
    std::cin >> cylinder.radius;
    std::cout << "請輸入高:";
    std::cin >> cylinder.height;
    std::cout << "圓周長:="<< cylinder.compute_circ() << "\n";
    std::cout << "圓面積:=" << cylinder.compute_area() << "\n";
    std::cout << "柱狀體體積:=" << cylinder.compute_volume() << "\n";
    std::cout << "柱狀體表面積:=" << cylinder.compute_surface() << "\n";

    cron_3D cron;
    std::cout << "請輸入半徑:";
    std::cin >> cron.radius;
    std::cout << "請輸入高:";
    std::cin >> cron.height;
    std::cout << "圓錐體體積:=" << cron.compute_volume() << "\n";


}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
