#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // 篶
    Matrix(int m, int n);
   
    // 盿把计篶ノ块痻皚じ
    Matrix(char name, int m, int n);
   


    // ﹚竡痻皚^(程)笲衡更
    Matrix operator^(Matrix& x);
  
};