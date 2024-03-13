#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "請輸入三角形三邊常(以空格隔開)：";
    cin >> a >> b >> c;

    if (a<=0 || b<=0 || c<=0) {
        cout << "邊長必為正數" << endl;
    }
    else if ((a + b) <= c || (a + c) <= b || (b + c) <= a) {
        cout << "無法構成一個三角形。" << endl;
    }
    else{
        cout << "可以構成一個三角形。" << endl;
    }

    return 0;
}
