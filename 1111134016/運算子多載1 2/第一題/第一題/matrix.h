#pragma once
#pragma once
#include <iostream>
#include"matrix.h"
using namespace std;
class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);

    // �w�q�x�}���u-�v(�t��)�e�m�B��l���h��
    Matrix operator-();

};

