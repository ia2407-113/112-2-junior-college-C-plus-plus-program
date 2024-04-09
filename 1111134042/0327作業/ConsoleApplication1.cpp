// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[5];
    string phones[5];

    // 輸入姓名電話
    cout << "請輸入5位朋友的姓名和電話：\n";
    for (int i = 0; i < 5; ++i) {
        cout << "朋友" << i + 1 << "姓名: ";
        getline(cin, names[i]);
        cout << "朋友" << i + 1 << "電話: ";
        getline(cin, phones[i]);
    }

    //查詢姓名
    string name;
    cout << "\n請輸入要查詢的朋友姓名: ";
    getline(cin, name);

    // 尋找電話
    bool found = false;
    for (int i = 0; i < 5; ++i)
    {
        if (names[i] == name)
        {
            cout << "朋友" << name << "的電話是: " << phones[i];
            found = true;
        }
    }
    if (!found) {
        cout << "抱歉，找不到姓名為 " << name << " 的朋友的電話資訊。";
    }
}
