#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "���s�w�q�u&�v�e�m�B��l���h���A�DA�x�}���ڸ��x�}(��A)�G\n";
    cout << "��J�x�}A���C��(row):";
    cin >> row;
    cout << "��J�x�}A�����(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "��J�@" << row << 'x' << column << "�x�}A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    b = &a;
    cout << "�x�}A���ڸ��x�}(��A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
