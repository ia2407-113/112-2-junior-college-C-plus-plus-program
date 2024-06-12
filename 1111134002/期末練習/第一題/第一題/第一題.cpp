// 第一題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include"circ.h"
using namespace std;


int main() 
{
    double radius, height;

    cout << "請輸入圓的半徑: ";
    cin >> radius;

    pie_2D pie(radius);
    cout << "圓餅面積: " << pie.getArea();

   cout << "\n請輸入圓柱的高度: ";
    cin >> height;
    cylinder_3D cylinder(radius, height);
    cout << "圓柱體積: " << cylinder.getVolume();
    cout << "\n圓柱表面積: " << cylinder.getSurfaceArea();

    cout << "\n請輸入圓錐的高度: ";
    cin >> height;
    cron_3D cone(radius, height);
    cout << "圓錐體積: " << cone.getVolume();

    return 0;
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
