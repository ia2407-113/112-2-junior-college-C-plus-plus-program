#include <iostream>
#include"matrix.h"
using namespace std;
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �t�mmxn���G���}�Celement���ʺA�O����
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // �w�q�x�}���u++�v(���W)��m�B��l���h��
    Matrix Matrix:: operator++(int)
    {
        Matrix temp(row, column); // �Ƥ���m++�B��l����e�����󤺮e 
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
            {
                temp.element[i][j] = this->element[i][j];
                this->element[i][j] = this->element[i][j] + 1;
            }
        return temp; // �^�ǫ�m++�B��l����e�����󤺮e
    }
;