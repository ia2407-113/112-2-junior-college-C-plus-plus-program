#include <iostream>
#include <cmath> 

using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // �غc�l
    Matrix(int m, int n);

        // �w�q�x�}���u^�v(�����)�e�m�B��l���h��
        Matrix operator&();
   
};
