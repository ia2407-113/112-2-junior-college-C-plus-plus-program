// 0522_2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <math.h>
#include"matrix.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "重新定義「-」前置運算子的多載，求A矩陣的副矩陣(-A)：\n";
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入一" << row << 'x' << column << "矩陣A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    b = a % 0; 

    cout << "矩陣A的平方:\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }
    return 0;
}
