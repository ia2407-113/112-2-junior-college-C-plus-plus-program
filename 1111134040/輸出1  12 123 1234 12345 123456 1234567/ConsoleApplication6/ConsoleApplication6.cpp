// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main() {
    int password;
    int attempts = 0; // 连续输入错误的次数

    do {
        std::cout << "請輸入密碼: ";
        std::cin >> password;

        if (password != 123) {
            std::cout << "密碼輸入錯誤" << std::endl;
            attempts++;

            if (attempts == 3) {
                std::cout << "暫停使用本系統!" << std::endl;
                return 0; // 如果连续三次输入错误，直接退出程序
            }
        }
        else {
            std::cout << "歡迎光臨本系統!" << std::endl;
            break; // 输入正确，跳出循环
        }

    } while (true);

    return 0;
}
