#include <iostream>

using namespace std;

int main() {
    double height, weight, bmi;

    // 提示用戶輸入身高（公尺）並讀取輸入值
    cout << "請輸入您的身高（公尺）：";
    cin >> height;

    // 提示用戶輸入體重並讀取輸入值
    cout << "請輸入您的體重（公斤）：";
    cin >> weight;

    // 用輸入的身高和體重計算BMI指數
    bmi = weight / (height * height);

    // 輸出計算得到的BMI指數
    cout << "您的BMI指數為：" << bmi << endl;

    return 0;
}

