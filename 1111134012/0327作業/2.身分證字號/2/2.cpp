#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int len1, len2;


    cout << "輸入第一個身分證字號：";
    cin >> a;


    cout << "輸入第二個身分證字號：";
    cin >> b;

    len1 = a.length(); //存取身分證字號的長度
    len2 = b.length();


    if (len1 != 10)// 檢查第一個身分證字號是否為十碼
        cout << "輸入的身分證字號錯誤";
    else {
        if (a[1] == '1')// 辨識第一個身分證字號的性別 第二位
            cout << "第一個身分證為男性\n";

        else if (a[1] == '2')
            cout << "第一個身分證為女性\n";

        else
            cout << "第一個身分證字號錯誤\n";
    }


    if (len2 != 10)// 檢查第二個身分證字號是否為十碼
        cout << "輸入的身分證字號錯誤\n";
    else {
        if (b[1] == '1')// 辨識二號身分證字號的性別
            cout << "第二個身分證為男性\n";
        else if (b[1] == '2')
            cout << "第二個身分證為女性\n";
        else
            cout << "第二個身分證字號錯誤\n";
    }

    if (a.substr(2, 7) < b.substr(2, 7))// 3~6 // 使用 substr() 
        cout << "第一個年紀比較大";
    else if (a.substr(2, 7) > b.substr(2, 7))
        cout << "第二個年紀比較大";

    return 0;
}
