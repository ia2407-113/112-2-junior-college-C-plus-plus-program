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
   
    // 定義矩陣的「++」(遞增)後置運算子的多載
    Matrix operator^(int);
    
};
