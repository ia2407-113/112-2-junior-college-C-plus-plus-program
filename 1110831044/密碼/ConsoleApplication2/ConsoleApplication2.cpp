#include <iostream>
using namespace std;

int main() {
    int attempt = 0;
    int max_attempts = 3;   // 最大嘗試次數
    string password;
    // 循環直到輸入正確的密碼或達到最大嘗試次數
    do {
        cout << "請輸入密碼: ";
        cin >> password;

        if (password != "123") {    // 如果輸入的密碼不是 "123"
            attempt++;              // 嘗試次數加1
            if (attempt >= max_attempts) {          // 如果嘗試次數大於或等於最大嘗試次數
                cout << "暫停使用本系統!" << endl;  // 顯示消息並終止程式
                return 0;
            }
            cout << "密碼輸入錯誤，您還有 " << max_attempts - attempt << " 次嘗試機會。" << endl; // 顯示剩餘的嘗試次數
        }
        else {                                  // 如果輸入的密碼是 "123"
            cout << "歡迎光臨本系統!" << endl;  // 顯示歡迎消息
            break;
        }
    } while (true);

    return 0;
}
