#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    int i, j, row, column;
    cout << "重新定義「^」(取最大值)運算子的多載，使其能應用在矩陣上\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    c = a ^ b;  // 矩陣A 和 矩陣B 取最大值

    cout << "矩陣A ^ 矩陣B = \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << c.element[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}
