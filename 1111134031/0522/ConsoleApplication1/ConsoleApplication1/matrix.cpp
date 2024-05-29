#include <iostream>
#include"matrix.h"
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

    // �w�q�x�}���u-�v(�t��)�e�m�B��l���h��
    Matrix  Matrix:: operator-()
    {
        Matrix temp(row, column);
        int i, j,y;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = y = sqrt (this->element[i][j]);
        return temp;
    }