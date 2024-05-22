#include <iostream>
#include <cmath> 
#include"math.h"

using namespace std;


    // 建構子
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // 定義矩陣的「^」(平方根)前置運算子的多載
    Matrix Matrix::operator&()
    {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    
};
