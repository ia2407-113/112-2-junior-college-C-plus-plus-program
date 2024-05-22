// Matrix.h

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);

    Matrix operator+(Matrix x);
    Matrix operator^(Matrix x); // 新增 operator^ 運算子
};

#endif // MATRIX_H
