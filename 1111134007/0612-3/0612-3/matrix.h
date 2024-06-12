#pragma once
#include <iostream>
#include <math.h>
#include"matrix.h"
using namespace std;
class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);

    // 定義矩陣的「-」(負號)前置運算子的多載
    Matrix operator-();

};
