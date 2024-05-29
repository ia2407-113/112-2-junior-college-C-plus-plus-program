#pragma once
#include <iostream>
#include<math.h>
using namespace std;
class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix operator%() const;

};

