#include <iostream>

using namespace std;

int main() {
    double expenditure;

    // 提示用戶輸入消費金額，並讀取輸入值
    cout << "請輸入消費金額：";
    cin >> expenditure;

    // 確認消費金額不低於10000
    if (expenditure < 10000) {
        cout << "消費金額不可低於10000！" << endl;
        return 1; // 退出程式，返回錯誤碼
    }

    // 計算禮券金額
    double voucher = 10000; // 初始購物券金額
    double remaining_amount = expenditure - 10000; // 超過10000的消費金額
    voucher += remaining_amount / 10.0; // 計算超過10000的消費金額對應的禮券金額

    // 輸出可獲得的禮券金額
    cout << "您可獲得的禮券金額為：" << voucher << endl;

    return 0;
}
