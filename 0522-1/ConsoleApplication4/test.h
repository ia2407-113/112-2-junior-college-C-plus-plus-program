#pragma once
#include <iostream>

class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix operator-();
    Matrix operator^(int) const; // ��������ڹB��l

};