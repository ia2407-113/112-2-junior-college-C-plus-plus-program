#include <iostream>
#include <cmath> 

using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // 建構子
    Matrix(int m, int n);

        // 定義矩陣的「^」(平方根)前置運算子的多載
        Matrix operator&();
   
};
