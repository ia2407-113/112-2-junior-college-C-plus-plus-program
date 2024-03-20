#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "請輸入三角形的三邊長：\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    if ((a + b) <= c || (a + c) <= b || (b + c) <= a) { // 若任意兩邊之和小於等於第三邊，則無法構成三角形
        cout << "無法構成一個三角形。\n";
    }
    else {
        cout << "可以構成一個三角形。\n";
    }
    return 0;
}