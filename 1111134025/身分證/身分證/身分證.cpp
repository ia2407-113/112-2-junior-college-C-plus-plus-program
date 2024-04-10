#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
    string str1, str2, str3, str4;
    cout << "輸入兩個身分證字號\n";
    cout << "第一位身分證字號\n";
    cin >> str1;
    cout << "第二位身分證字號\n";
    cin >> str2;

    char c1 = str1[0];
    char c2 = str2[0];

    if (c1 == 'M')
    {
        cout << "第一位為男性\n";
    }
    else
    {
        cout << "第一位為女性\n";
    }

    if (c2 == 'M')
    {
        cout << "第二位為男性\n";
    }
    else
    {
        cout << "第二位為女性\n";
    }

    str3 = str1.substr(3, 4);
    str4 = str2.substr(3, 4);

    if (str3 < str4)
    {
        cout << "第一位比較大\n";
    }
    else if (str3 == str4)
    {
        cout << "兩位一樣大\n";
    }
    else
    {
        cout << "第二位比較大\n";
    }

    return 0;
}