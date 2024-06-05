﻿#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    int i, j, row, column;
    cout << "重新定義「^」後置運算符的重載，使其能應用在矩陣取平方根上\n";
    cout << "輸入矩陣a的行數(row):";
    cin >> row;
    cout << "輸入矩陣a的列數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入一個" << row << 'x' << column << "矩陣a" << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    }

    cout << "執行「b = a^0 ;」的順序，是先執行「b = a ;」，然後執行「a = sqrt(a) ;」\n";
    b = -a;  // 先執行b = a ;，然後再執行 a = sqrt(a) ;  

    cout << "矩陣b的內容為:\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "b[" << i << "][" << j << "]=";
            cout << b.element[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "a的內容為:\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "a[" << i << "][" << j << "]=";
            cout << a.element[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}