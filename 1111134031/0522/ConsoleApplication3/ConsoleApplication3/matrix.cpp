#include <iostream>
#include"matrix.h"
using namespace std;

Matrix:: Matrix(int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix::Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                cout << name << '[' << i << "]["
                    << j << "]=";
                cin >> element[i][j];
            }
    };