#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <algorithm> // For std::max
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);
    Matrix operator+(Matrix x);
    Matrix operator^(Matrix x); // 新增 ^ 運算子的多載
};

#endif // MATRIX_H
