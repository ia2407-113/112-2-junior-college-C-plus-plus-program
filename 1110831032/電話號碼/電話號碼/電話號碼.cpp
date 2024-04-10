#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numFriends = 5;
    string names[numFriends];
    string phones[numFriends];

    // 輸入朋友的姓名和電話
    for (int i = 0; i < numFriends; ++i) {
        cout << "請輸入第 " << (i + 1) << " 個朋友的姓名：";
        getline(cin, names[i]);

        cout << "請輸入第 " << (i + 1) << " 個朋友的電話：";
        getline(cin, phones[i]);
    }

    // 輸入要查詢的朋友姓名
    string queryName;
    cout << "請輸入要查詢的朋友的姓名：";
    getline(cin, queryName);

    // 尋找朋友並輸出電話
    bool found = false;
    for (int i = 0; i < numFriends; ++i) {
        if (names[i] == queryName) {
            cout << "朋友 " << queryName << " 的電話是：" << phones[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "找不到名為 " << queryName << " 的朋友。" << endl;
    }

    return 0;
}
