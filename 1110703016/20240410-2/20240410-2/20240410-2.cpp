// 20240410-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
const float pi = 3.14;

void volume(int a, double &ans) {
    ans = a * a * a;
}
void volume(float b, double &ans) {
    ans = (4.0 / 3.0) * pi * b * b * b;
}
void volume(float c1, float c2, double &ans) {
    ans = c1 * c1 * pi * c2;
}
void volume(int d1, int d2, int d3, double &ans) {
    ans = d1 * d2 * d3;
}

int main()
{
    double ans;

    int a;
    cout << "輸入立方體邊長：";
    cin >> a;
    volume(a, ans);
    cout << "立方體體積：" << ans << endl << endl;

    float b;
    cout << "輸入球體半徑：";
    cin >> b;
    volume(b, ans);
    cout << "球體體積：" << ans << endl << endl;

    float c1, c2;
    cout << "輸入圓柱體的半徑：";
    cin >> c1;
    cout << "輸入圓柱體的高度：";
    cin >> c2;
    volume(c1, c2, ans);
    cout << "圓柱體體積：" << ans << endl << endl;

    int d1, d2, d3;
    cout << "輸入長方體邊長：";
    cin >> d1 >> d2 >> d3;
    volume(d1, d2, d3, ans);
    cout << "長方體體積：" << ans << endl;

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
