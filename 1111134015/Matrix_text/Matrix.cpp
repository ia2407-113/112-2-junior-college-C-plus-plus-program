#include <iostream>
#include"Matrix.h"
using namespace std;

 Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 動態配置mxn的二維陣列element之記憶體
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // 定義矩陣的「+」(加號)運算子的多載
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
       

