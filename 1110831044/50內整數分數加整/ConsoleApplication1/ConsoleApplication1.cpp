#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    // 輸入正整數n，確保n小於50
    cout << "請輸入小於50的正整數n: ";
    cin >> n;

    // 檢查輸入的合法性
    if (n <= 0 || n >= 50) {
        cout << "輸入的數字必須為正整數且小於50。" << endl;
        return 1; // 返回非0表示錯誤
    }

    // 計算和
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    // 輸出結果
    cout << "1 + 1/2 + 1/3 + ... + 1/" << n << " = " << sum << endl;
    // 返回0表示成功
    return 0;
}
