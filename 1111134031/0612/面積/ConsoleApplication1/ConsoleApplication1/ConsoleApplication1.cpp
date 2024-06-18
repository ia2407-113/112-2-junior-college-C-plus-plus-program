#include <math.h>
#include <iostream>
#include"circleh.h"
using namespace std;
int main()
{
    cylinder_3D c1;
    cron_3D c2;

    cout << "請輸入半徑";
    cin >> c1.radius;

    cout << "請輸入圓柱高";
    cin >> c1.height;

    cout << "請輸入圓錐高";
    cin >> c2.height;

    c2.radius = c1.radius;

    c1.compute_circ();
    c1.compute_area();
    c1.compute_volume();
    c1.compute_surface();
    c2.compute_volume();

    cout << "圓形周長：" << c1.circ << "\n";
    cout << "圓形面積：" << c1.area << "\n";
    cout << "圓柱體積：" << c1.volume << "\n";
    cout << "圓柱面積：" << c1.surface << "\n";
    cout << "圓錐體積：" << c2.volume << "\n";

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
