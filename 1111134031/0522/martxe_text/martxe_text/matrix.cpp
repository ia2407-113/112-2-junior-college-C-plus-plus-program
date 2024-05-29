#include <iostream>
#include"matrix.h"
using namespace std;
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // 定義矩陣的「++」(遞增)後置運算子的多載
    Matrix Matrix:: operator++(int)
    {
        Matrix temp(row, column); // 備分後置++運算子執行前的物件內容 
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
            {
                temp.element[i][j] = this->element[i][j];
                this->element[i][j] = this->element[i][j] + 1;
            }
        return temp; // 回傳後置++運算子執行前的物件內容
    }
;