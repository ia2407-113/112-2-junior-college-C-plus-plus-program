
#include <iostream>
#include <string>

using namespace std;

int main()
{   //寫一程式，輸入一列文字（不含中文字或不顯示的字元，即ASCII值為>= 32 且ASCII值為<= 127的字元），輸出各字元出現的次數。
    string word;
    int a[128] = { 0 };

    cout << "請輸入一列文字\n";
    cin >> word;

    for (char c : word) {//被設定為word中的下一個字符，直到word中的所有字符都被遍歷過
        if (c >= 32 && c <= 127) {
            a[c]++;
        }
    }

    cout << "各字元出現的次數：\n";
    for (int i = 32; i <= 127; i++) {
        if (a[i] > 0) {
            cout << "字元 " << char(i) << " 出現 " << a[i] << " 次\n";
        }
    }

    return 0;
}

