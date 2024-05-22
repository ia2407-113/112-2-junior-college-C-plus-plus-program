#include <iostream>
#include"big.h"
using namespace std;

    // 建構子
    Matrix::Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 動態配置 mxn 的二維陣列 element 的記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // 帶參數的建構子，用於輸入矩陣元素
    Matrix::Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // 動態配置 mxn 的二維陣列 element 的記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }



    // 定義矩陣的「^」(最大值)運算子的多載
    Matrix Matrix:: operator^(Matrix& x)
    {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = max(this->element[i][j], x.element[i][j]);
        return temp;
    
};