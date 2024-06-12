#include <iostream>
#include "shape.h"
using namespace std;

int main() {
    double radius, height;

    std::cout << "請輸入圓的半徑: ";
    std::cin >> radius;

    pie_2D pie(radius);
    std::cout << "圓餅的面積: " << pie.getArea() << std::endl;

    std::cout << "請輸入圓柱的高度: ";
    std::cin >> height;
    cylinder_3D cylinder(radius, height);
    std::cout << "圓柱的體積: " << cylinder.getVolume() << std::endl;
    std::cout << "圓柱的表面積: " << cylinder.getSurfaceArea() << std::endl;

    std::cout << "請輸入圓錐的高度: ";
    std::cin >> height;
    cron_3D cone(radius, height);
    std::cout << "圓錐的體積: " << cone.getVolume() << std::endl;

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
