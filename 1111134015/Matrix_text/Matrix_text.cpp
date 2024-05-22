// Matrix_text.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include"Matrix.h"
using namespace std;
int main()
{
    int i, j, row1, column1, row2, column2;
    cout << "重新定義「*」乘號運算子多載，使其能應用在矩陣乘法上\n";
    cout << "輸入矩陣A的列數(row):";
    cin >> row1;
    cout << "輸入矩陣A的行數(column):";
    cin >> column1;
    Matrix a('A', row1, column1);

    while (1)
    {
        cout << "輸入矩陣B的列數(row):";
        cin >> row2;
        cout << "輸入矩陣B的行數(column):";
        cin >> column2;
        if (column1 != row2)
            cout << "矩陣B的列數不等於矩陣A的行數，故無法相乘.\n";
        else
            break;
    }

    Matrix b('B', row2, column2);
    Matrix c(row1, column2);

    c = a * b;  // 矩陣A*矩陣B

    cout << "A * B = \n";
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}