#include <iostream>

int main() {
    double a, b, c;
    std::cout << "請輸入三邊長 a, b, c: ";
    std::cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "無法構成一個三角形" << std::endl;
    }
    else {
        std::cout << "可以構成一個三角形" << std::endl;
    }

    return 0;
}
