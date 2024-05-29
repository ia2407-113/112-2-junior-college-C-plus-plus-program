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

// 定义矩阵的「-」(负号)前置运算子的多载

// 定义矩阵的「^」(平方根)前置运算子的多载
Matrix Matrix::operator%() 
{
    Matrix temp(row, column);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);
    return temp;
}

// 析构函数释放动态分配的内存

