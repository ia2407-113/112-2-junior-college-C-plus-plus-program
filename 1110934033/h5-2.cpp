#include <iostream>
#include <string>

using namespace std;
int main() {
    string id1, id2;
    cout << "請輸入兩個身分證字號: ";
    cin >> id1 >> id2;

    char gender1 = id1[1];
    char gender2 = id2[1];

    if (gender1 == '1') {
        cout << "第一位的身份證字號是男性" << endl;
    } else {
        cout << "第二位的身份證字號是女性" << endl;
    }

    if (gender2 == '2') {
        cout << "第一位的身份證字號是女性" << endl;
    } else {
        cout << "第二位的身份證字號是男性" << endl;
    }

    string num1 = id1.substr(7, 9);
    string num2 = id2.substr(7, 9);

    if (num1 > num2) {
        cout << "第一位的年齡較大" << endl;
    } else if (num1 < num2) {
        cout << "第二位的年齡較大" << endl;
    } else {
        cout << "兩位年齡一樣大" << endl;
    }

    return 0;
}
