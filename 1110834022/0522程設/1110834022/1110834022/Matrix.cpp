#include "Matrix.h"

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;

    // �ʺA�t�mmxn���G���}�Celement���O����
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;

    // �ʺA�t�mmxn���G���}�Celement���O����
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << name << '[' << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}

Matrix Matrix::operator+(Matrix x) {
    Matrix temp(this->row, this->column);
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            temp.element[i][j] = this->element[i][j] + x.element[i][j];

    return temp;
}

Matrix Matrix::operator^(Matrix x) {
    Matrix temp(this->row, this->column);
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            temp.element[i][j] = std::max(this->element[i][j], x.element[i][j]);

    return temp;
}
