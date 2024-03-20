#include <iostream>

int main() {
    int password;
    int attempts = 0;

    do {
        std::cout << "輸入密碼: ";
        std::cin >> password;
        attempts++;

        if (password != 123) {
            std::cout << "密碼錯誤" << std::endl;
            if (attempts >= 3) {
                std::cout << "暫停使用本系統!" << std::endl;
                return 0;
            }
        }
        else {
            std::cout << "登入成功" << std::endl;
        }
    } while (password != 123 && attempts < 3);

    return 0;
}
