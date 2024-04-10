// 4.10-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void volume(int,int*);    //宣告多載函數
void volume(float,float*);
void volume(float,float,float*);
void volume(float, float,float,float*);

int main()    //&:獲取變數的地址，並將地址傳遞給函數   *:指標所指向的變數，並將計算的結果存儲在該變數中
{
    int s,resultint;
    float b, o, ohi, lh, lw, lhi,resultfloat;
    cout << "計算立方體體積，輸入邊長: ";
    cin >> s;
    volume(s,&resultint);
    cout << "體積為: " << resultint << "\n";

    cout << "計算球體體積，輸入半徑: ";
    cin >> b;
    volume(b,&resultfloat);
    cout << "體積為: " << resultfloat << "\n";

    cout << "計算圓柱體體積，輸入半徑: ";
    cin >> o;
    cout << "輸入高: ";
    cin >> ohi;
    volume(o,ohi, &resultfloat);
    cout << "體積為: " << resultfloat << "\n";

    cout << "計算長方體體積，輸入長: ";
    cin >> lh;
    cout << "輸入高: ";
    cin >> lhi;
    cout << "輸入寬: ";
    cin >> lw;
    volume(lh,lhi,lw, &resultfloat);
    cout << "體積為: " << resultfloat << "\n";
}

void volume(int a,int*result) {    //定義多載函數
    *result = a * a * a;
}

void volume(float b, float* result) {
    *result = 3.14159 * (b * b * b)*(4.0/3.0);
}

void volume(float c, float d, float* result) {
    *result = 3.14159 * (c * c) * d;
}
void volume(float e, float f, float g, float* result) {
    *result = e * f * g;
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
