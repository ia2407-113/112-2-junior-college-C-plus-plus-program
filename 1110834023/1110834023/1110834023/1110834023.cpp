#include <iostream>

int main() {

    std::cout << "請輸入消費額: ";
    int money;
    std::cin >> money;

    double feedback = 0;
    if (money >= 10000) {
        feedback = (money / 10000) * 1000;
    }

    std::cout << "您的反饋額為: " << feedback << " 元" << std::endl;

    return 0;
}
