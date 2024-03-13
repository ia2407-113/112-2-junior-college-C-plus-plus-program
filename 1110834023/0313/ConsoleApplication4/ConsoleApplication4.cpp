#include <iostream>
#include <string>

int main() {
    double income;
    std::cout << "請輸入綜合所得淨額: ";
    std::cin >> income;
    int tax = 0;

    std::string range;

    if (income <= 560000) {
        tax = income * 0.05 - 0;
        range = "0 ~ 560,000";
    }
    else if (income <= 1260000) {
        tax = income * 0.12 - 39200;
        range = "560,001 ~ 1,260,000";
    }
    else if (income <= 2520000) {
        tax = income * 0.20 - 140000;
        range = "1,260,001 ~ 2,520,000";
    }
    else if (income <= 4720000) {
        tax = income * 0.30 - 392000;
        range = "2,520,001 ~ 4,720,000";
    }
    else {
        tax = income * 0.40 - 864000;
        range = "4,720,001 以上";
    }

    std::cout << "應納稅額為: " << tax << " 元" << std::endl;
    std::cout << "級距: " << range << std::endl;

    return 0;
}
