#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;

    // 配置 mxn 的二维数组 element 的动态内存
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix Matrix::operator^(int) {
    Matrix temp(row, column); // 備分後置^運算子執行前的物件內容
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp.element[i][j] = element[i][j];
            element[i][j] = element[i][j] * element[i][j]; // 平方運算
        }
    }
    return temp; // 回傳後置^運算子執行前的物件內容
}