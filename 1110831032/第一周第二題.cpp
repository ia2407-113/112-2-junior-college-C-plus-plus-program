#include <iostream>

using namespace std;

int main() {
    int totalAmount;
    cout << "請輸入您的消費金額：";
    cin >> totalAmount;

    int giftAmount = (totalAmount / 10000) * 1000;
    cout << "根據您的消費金額，您可以獲得" << giftAmount << "元禮金。" << endl;

    return 0;
}
