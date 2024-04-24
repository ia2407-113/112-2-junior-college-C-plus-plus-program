// 1111134004 張庭瑜-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

void volume(int, int*);
void volume(double, double*);
void volume(double, double, double*);
void volume(double, double, double, double*);

int main()
{
    int resultint, sl;
    double r, cr, ch, rl, rw, rh, resultdouble;

    cout << "輸入立方體邊長: ";
    cin >> sl;
    volume(sl, &resultint);
    cout << "立方體體積為: " << resultint <<"\n";

    cout << "輸入球體半徑: ";
    cin >> r;
    volume(r, &resultdouble);
    cout << "球體體積為: " << resultdouble << "\n";

    cout << "輸入圓柱體半徑: ";
    cin >> cr;
    cout << "輸入圓柱體高度: ";
    cin >> ch;
    volume(cr, ch, &resultdouble);
    cout << "圓柱體體積為: " << resultdouble << "\n";
   
    cout << "輸入長方體長: ";
    cin >> rl;
    cout << "輸入長方體寬: ";
    cin >> rw;
    cout << "輸入長方體高: ";
    cin >> rh;
    volume(rl, rw, rh, &resultdouble);
    cout << "長方體體積為: " << resultdouble;

    return 0;
}
void volume(int sll, int* result) {
    *result = sll * sll * sll;
}
void volume(double rr,double* result) {
    *result = 4.0/3.0 * 3.14159 * rr * rr * rr;
}
void volume(double crr, double chh, double* result) {
    *result = 3.14159 * crr * crr * chh;
}
void volume(double rll, double rww, double rhh, double* result) {
    *result = rll * rww * rhh;
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
