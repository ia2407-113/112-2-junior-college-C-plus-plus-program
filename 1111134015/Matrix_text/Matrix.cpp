#include <iostream>
#include"Matrix.h"
using namespace std;

 Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // �w�q�x�}���u+�v(�[��)�B��l���h��
 Matrix Matrix::operator++(int)
 {
     Matrix temp(row, column);
     for (int i = 0; i < row; i++)
         for (int j = 0; j < column; j++)
         {
             temp.element[i][j] = this->element[i][j];
             this->element[i][j] = this->element[i][j] + 1;
         }


     return temp;
 };
       
