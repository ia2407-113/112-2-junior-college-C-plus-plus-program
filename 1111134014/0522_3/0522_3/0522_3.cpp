﻿// 0522_3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include"matrix.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "重新定義「+」(加號)運算子多載，使其能應用在矩陣加法上\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    c = a ^ b;  // 矩陣A + 矩陣B

    cout << "矩陣A與矩陣B中較大的= \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
