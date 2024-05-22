#include <iostream>
#include <cmath> 
#include"math.h"

using namespace std;


    // �غc�l
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �t�mmxn���G���}�Celement���ʺA�O����
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // �w�q�x�}���u^�v(�����)�e�m�B��l���h��
    Matrix Matrix::operator&()
    {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    
};
