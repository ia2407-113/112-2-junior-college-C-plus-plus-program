#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numFriends = 5;
    string names[numFriends];
    string phones[numFriends];

    // 輸入朋友的姓名和電話號碼
    for (int i = 0; i < numFriends; ++i) {
        cout << "請輸入第" << i + 1 << "個朋友的姓名:";
        getline(cin, names[i]);
        cout << "請輸入第" << i + 1 << "個朋友的電話號碼:";
        getline(cin, phones[i]);
    }

    // 輸入要查詢的朋友姓名
    string searchName;
    cout << "請輸入要查詢的朋友姓名:";
    getline(cin, searchName);

    // 在已知朋友姓名中查找對應的電話號碼
    bool found = false;
    for (int i = 0; i < numFriends; ++i) {
        if (names[i] == searchName) {
            cout << "朋友 " << searchName << " 的電話號碼是:" << phones[i] << endl;
            found = true;
            break;
        }
    }

    // 如果未找到朋友
    if (!found) {
        cout << "找不到朋友 " << searchName << " 的信息。" << endl;
    }

    return 0;
}
