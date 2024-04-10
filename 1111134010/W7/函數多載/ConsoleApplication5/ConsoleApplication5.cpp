// 第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
void volume(int l);
void volume(int l, int w, int h);
void volume(float r, int h);
void volume(float r);
#include <iostream>
using namespace std;
void volume(int l)//正方體
{
    int v;
    v = l * l * l;
    cout << "正方體體積為" << v << "\n";
}
void volume(int l, int w, int h)//長方體
{
    int v;
    v = l * w * h;
    cout << "長方體體積為" << v << "\n";
}
void volume(float r, int h)//圓柱體
{
    float v;
    v = r * r * 3.14 * h;
    cout << "圓柱體體積為" << v << "\n";
}
void volume(float r)//球體
{
    float v;
    v = r * r * r * 4 * 3.14 / 3;
    cout << "球體體積為" << v << "\n";
}
int main()
{
    float r;
    int l, w, h;
    cout << "請輸入長";
    cin >> l;
    cout << "請輸入寬";
    cin >> w;
    cout << "請輸入高";
    cin >> h;
    cout << "請輸入圓柱體半徑";
    cin >> r;
    volume(l);
    volume(l, w, h);
    volume(r, h);
    r = 0;
    cout << "請輸入球體半徑";
    cin >> r;
    volume(r);
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
