#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix operator^(int); // 后置^运算符
};

#endif // MATRIX_H
