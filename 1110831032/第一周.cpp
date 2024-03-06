#include <iostream>

using namespace std;

int main() {
    double height, weight, bmi;

    cout << "請輸入您的身高（公尺）：";
    cin >> height;

    cout << "請輸入您的體重（公斤）：";
    cin >> weight;

    bmi = weight / (height * height);

    cout << "您的BMI值為：" << bmi << endl;

    if (bmi < 18.5) {
        cout << "您的體重過輕。" << endl;
    }
    else if (bmi < 24) {
        cout << "您的體重正常。" << endl;
    }
    else if (bmi < 27) {
        cout << "您的體重過重。" << endl;
    }
    else {
        cout << "您的體重肥胖。" << endl;
    }

    return 0;
}
