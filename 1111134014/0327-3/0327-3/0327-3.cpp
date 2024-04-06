#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string name[5], phone[5];// 宣告兩個字串類別陣列，分別用於存放五位同學的姓名和電話號碼
    string find_name;  // 用於存放要尋找的同學姓名

    cout << "輸入五位同學的電話及姓名\n";  // 提示使用者輸入五位同學的資料

    
    for (int i = 0; i < 5; i++) {// 讀取五位同學的姓名和電話號碼
        cout << "姓名:";
        getline(cin, name[i]);  // 讀取同學姓名並存入陣列中
        cout << "電話:";
        getline(cin, phone[i]);  // 讀取同學電話號碼並存入陣列中
    }

    cout << "\n" << "輸入要尋找的同學姓名\n";  // 提示使用者輸入要尋找的同學姓名
    getline(cin, find_name);  // 讀取要尋找的同學姓名

    // 使用迴圈尋找要尋找的同學姓名並輸出其電話號碼
    for (int i = 0; i < 5; i++) {
        if (find_name == name[i]) {  // 如果找到匹配的姓名
            cout << "尋找的同學電話號碼為:" << phone[i];  // 輸出該同學的電話號碼
            return 0;
        }
    }

    cout << "錯誤姓名";  // 如果沒有找到匹配的姓名，輸出錯誤訊息
    return 0;
}
