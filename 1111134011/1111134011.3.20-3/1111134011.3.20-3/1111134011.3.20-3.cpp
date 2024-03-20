#include <iostream>
using namespace std;
int main() {
    int password;
    int attempts = 0; 

    do {
        cout << "請輸入密碼: ";
        cin >> password;

        if (password != 123) {
           cout << "密碼輸入錯誤" <<"\n";
            attempts++;

            if (attempts == 3) {
                cout << "暫停使用本系統!" << "\n";
                return 0; 
            }
        }
        else {
            cout << "歡迎光臨本系統!" << "\n";
            break; 
        }

    } while (true);

    return 0;
}