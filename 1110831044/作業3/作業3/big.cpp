#include <iostream>
#include"big.h"
using namespace std;

    // �غc�l
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�m mxn ���G���}�C element ���O����
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // �a�Ѽƪ��غc�l�A�Ω��J�x�}����
    Matrix::Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�m mxn ���G���}�C element ���O����
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }



    // �w�q�x�}���u^�v(�̤j��)�B��l���h��
    Matrix Matrix:: operator^(Matrix& x)
    {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = max(this->element[i][j], x.element[i][j]);
        return temp;
    
};