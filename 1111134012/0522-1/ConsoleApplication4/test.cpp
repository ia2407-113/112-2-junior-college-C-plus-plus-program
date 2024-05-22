#include <iostream>
#include "test.h"
#include <math.h>
    int row, column;
    int** element;

    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;


        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix Matrix::operator-()
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = -(this->element[i][j]);
        return temp;
    }

    Matrix Matrix::operator^(int) const {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                temp.element[i][j] = static_cast<int>(sqrt(this->element[i][j]));
            }
        }
        return temp;
    }