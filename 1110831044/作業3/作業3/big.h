#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // 建構子
    Matrix(int m, int n);
   
    // 帶參數的建構子，用於輸入矩陣元素
    Matrix(char name, int m, int n);
   


    // 定義矩陣的「^」(最大值)運算子的多載
    Matrix operator^(Matrix& x);
  
};