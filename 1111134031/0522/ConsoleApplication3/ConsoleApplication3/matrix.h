#include <iostream>
using namespace std;
class Matrix
{
    public:
    int row, column;
    int** element;
    Matrix(int m, int n);


    Matrix(char name, int m, int n);
};
