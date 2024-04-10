// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int volume(int* h);
double volume(double* h);
double volume(double* w, double* h);
double volume(double* L, double* w, double* h);

int main()
{
    int cube_v, cube_h;
    double sphere_v, sphere_w, cylinder_v, cylinder_h, cylinder_w, cuboid_v, cuboid_L, cuboid_w, cuboid_h;

    cout << "請輸入正方體的高";
    cin >> cube_h;
    cube_v = volume(&cube_h);
    cout << "\n";

    cout << "請輸入球體的半徑";
    cin >> sphere_w;
    sphere_v = volume(&sphere_w);
    cout << "\n";

    cout << "請輸入圓柱體的半徑";
    cin >> cylinder_w;
    cout << "請輸入圓柱體的高";
    cin >> cylinder_h;
    cylinder_v = volume(&cylinder_w, &cylinder_h);
    cout << "\n";

    cout << "請輸入長方體的長";
    cin >> cuboid_L;
    cout << "請輸入長方體的寬";
    cin >> cuboid_w;
    cout << "請輸入長方體的高";
    cin >> cuboid_h;
    cuboid_v = volume(&cuboid_L, &cuboid_w, &cuboid_h);
    cout << "\n";

    cout << "正方體的體積為:" << cube_v << "\n";
    cout << "球體的體積為:" << sphere_v << "\n";
    cout << "圓柱體的體積為:" << cylinder_v << "\n";
    cout << "長方體的體積為:" << cuboid_v << "\n";
}

int volume(int* h)
{
    int v = 0;
    v = *h * *h * *h;
    return v;
}
double volume(double* h)
{
    double v = 0;
    v = 3.14 * *h * *h * *h * 4 / 3;
    return v;
}
double volume(double* w, double* h)
{
    double v = 0;
    v = *w * *w * 3.14 * *h;
    return v;
}
double volume(double* L, double* w, double* h)
{
    double v = 0;
    v = *L * *w * *h;
    return v;
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
