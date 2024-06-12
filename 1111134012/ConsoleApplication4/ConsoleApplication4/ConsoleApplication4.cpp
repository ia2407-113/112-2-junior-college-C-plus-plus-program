#include <iostream>
using namespace std;
#include <math.h>

class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix operator++()
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    }
};

int main()
{
    int i, j, row, column;
    cout << "重新定義「++」前置運算子的多載，把A矩陣開平方根(++A)：\n";
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
    b = ++a;
    cout << "矩陣A的平方根矩陣(++A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}