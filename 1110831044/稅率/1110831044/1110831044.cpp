#include <iostream>
using namespace std;

double calculate_tax(double income, double& tax_rate) {
    double progressive_difference;
    double tax_amount;

    // 根据综合所得的不同范围，选择相应的税率和累进差额
    if (income <= 560000) {
        tax_rate = 0.05;
        progressive_difference = 0;
    }
    else if (income <= 1260000) {
        tax_rate = 0.12;
        progressive_difference = 39200;
    }
    else if (income <= 2520000) {
        tax_rate = 0.20;
        progressive_difference = 140000;
    }
    else if (income <= 4720000) {
        tax_rate = 0.30;
        progressive_difference = 392000;
    }
    else {
        tax_rate = 0.40;
        progressive_difference = 864000;
    }

    // 计算应纳税额
    tax_amount = income * tax_rate - progressive_difference;
    // 如果应纳税额为负数，则设为0
    tax_amount = max(tax_amount, 0.0);
    return tax_amount;
}

int main() {
    double income;
    cout << "請輸入綜合所得:：";
    cin >> income;

    double tax_rate;
    double tax_amount = calculate_tax(income, tax_rate);
    cout << "您的應納稅額:" << tax_amount << endl;
    cout << "對應的稅率:" << tax_rate * 100 << "%" << endl;

    return 0;
}
