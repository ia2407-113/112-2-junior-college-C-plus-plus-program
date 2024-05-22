// Matrix.cpp

#include "Matrix.h"

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    std::cout << "¿é¤J¤@" << m << 'x' << n << "¯x°}" << name << std::endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            std::cout << name << '[' << i << "][" << j << "]=";
            std::cin >> element[i][j];
        }
}

Matrix Matrix::operator+(Matrix x) {
    Matrix temp(row, column);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = element[i][j] + x.element[i][j];
    return temp;
}

Matrix Matrix::operator^(Matrix x) {
    Matrix temp(row, column);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = (element[i][j] > x.element[i][j]) ? element[i][j] : x.element[i][j];
    return temp;
}




