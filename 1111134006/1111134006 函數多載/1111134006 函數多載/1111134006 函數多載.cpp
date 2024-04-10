// 1111134006 函數多載.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
using namespace std;
void volume(int a);//立方
void volume(float a);//球體
void volume(float a, float b);//圓柱
void volume(float a, float b, float c);//長方
int main()
{
    int h;
    float v, s, k, t, d, l;
    cout << "輸入立方體邊的長度:";
    cin >> h;
    volume(h);

    cout << "輸入球體半徑:";
    cin >> v;
    volume(v);

    cout << "輸入圓柱體體積半徑:";
    cin >> s;
    cout << "輸入圓柱體體積高:";
    cin >> k;
    volume(s, k);

    cout << "輸入長方體體積長:";
    cin >> t;
    cout << "輸入長方體體積寬:";
    cin >> d;
    cout << "輸入長方體體積高:";
    cin >> l;
    volume(t, d, l);

}
void volume(int a)
{
    int q;
    q = a * a * a;
    cout << "立方體體積為:" << q;
    cout << "\n";
}
void volume(float a)
{
    float w;
    w = (4.0 / 3.0) * 3.14 * (a * a * a);
    cout << "球體體體積為:" << w;
    cout << "\n";
}
void volume(float a, float b)
{
    float p;
    p = 3.14 * a * a * b;
    cout << "圓柱體體體積為:" << p;
    cout << "\n";
}
void volume(float a, float b, float c)
{
    float o;
    o = a * b * c;
    cout << "長方體體體積為:" << o;
    cout << "\n";
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
