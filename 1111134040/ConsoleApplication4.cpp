// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main() {
    int n;
    double sum = 0.0;

    // 要求用户输入小于50的正整数n
    do {
        std::cout << "請輸入小於50的正整數n：";
        std::cin >> n;
    } while (n <= 0 || n >= 50);

    // 计算和
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    // 输出结果
    std::cout << "1 + 1/2 + 1/3 + ... + 1/" << n << " = " << sum << std::endl;

    return 0;
}
