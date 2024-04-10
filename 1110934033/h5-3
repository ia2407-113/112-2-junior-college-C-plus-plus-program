#include <iostream>
#include <string>

using namespace std;
int main() {
    string names[5];
    string phones[5];
  
    cout << "請輸入5位朋友的姓名及電話:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "姓名: ";
        getline(cin >> names[i]); 
        cout << "電話: ";
        getline(cin, phones[i]);
    }

    string sName;
    cout << "請輸入要查詢的姓名:";
    getline(cin, sName);

    for (int i = 0; i < 5; ++i) {
        if (names[i] == sName) {
            cout << sName << " 的電話是: " << phones[i] << endl;
        }
        else{
            cout << "查無此人" << endl;
        }
    }

    return 0;
}
