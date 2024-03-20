#include <iostream>

int main() {
    int n;
    double sum = 0;

    std::cout << "請輸入小於50的正整數: ";
    std::cin >> n;

    if (n <= 0 || n >= 50) {
        std::cout << "數字大於50" << std::endl;
        return 1; 
    }

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    std::cout << "1 + 1/2 + 1/3 + ... + 1/n 的和為: " << sum << std::endl;

    return 0;
}
