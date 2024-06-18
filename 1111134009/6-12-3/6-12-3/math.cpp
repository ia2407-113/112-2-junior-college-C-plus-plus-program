#include <iostream>
#include <math.h>
#include"math.h"


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

    Matrix  Matrix::operator++()
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    }

