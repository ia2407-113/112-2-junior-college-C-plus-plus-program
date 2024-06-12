#include <iostream>
#include <math.h>
using namespace std;

class Matrix {
public:
    int row, column;
    double** element;

    Matrix(int m, int n) {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new double* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new double[n];
    }

    Matrix operator++() {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    }
};

int main() {
    int i, j, row, column;
    cout << "用前置一元運算子++，將矩陣內容個別開平方根：\n";
    cout << "輸入矩陣的列數(row):";
    cin >> row;
    cout << "輸入矩陣的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入一" << row << 'x' << column << "矩陣" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    b = ++a;
    cout << "矩陣A的開根矩陣(++A):\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}