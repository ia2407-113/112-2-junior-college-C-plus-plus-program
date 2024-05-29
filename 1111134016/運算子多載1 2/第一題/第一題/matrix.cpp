#include <iostream>
#include"matrix.h"
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    // 配置mxn的二維陣列element之動態記憶體
    element = new int* [m];
    int i, j;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}


// 定义矩阵的「^」(平方根)后置运算符的重载
Matrix Matrix::operator-() {
    Matrix temp(row, column); // 备份后置^运算符执行前的对象内容
    int i, j, y;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp.element[i][j] = y = sqrt(this->element[i][j]);
        }
    }
    return temp; // 返回后置^运算符执行前的对象内容
}
