#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // �غc�l
    Matrix(int m, int n);
   
    // �a�Ѽƪ��غc�l�A�Ω��J�x�}����
    Matrix(char name, int m, int n);
   


    // �w�q�x�}���u^�v(�̤j��)�B��l���h��
    Matrix operator^(Matrix& x);
  
};