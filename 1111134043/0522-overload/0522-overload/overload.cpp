#include <iostream>
#include"Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new int* [m];
    int i, j;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix Matrix:: operator-()
{
    Matrix temp(row, column);
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            temp.element[i][j] = -(this->element[i][j]);
    return temp;
}