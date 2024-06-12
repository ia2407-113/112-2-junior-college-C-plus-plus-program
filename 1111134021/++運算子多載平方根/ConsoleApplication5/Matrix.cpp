#include <iostream>
#include <math.h>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    // �t�mmxn���G���}�Celement���ʺA�O����
    element = new int* [m];
    int i, j;
    for (i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix Matrix::operator++()
{
    Matrix temp(this->row, this->column);
    int i, j;
    for (i = 0; i < this->row; i++)
        for (j = 0; j < this->column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);
    return temp;
}
