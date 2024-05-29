class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n);
   

    Matrix(char name, int m, int n);
    

    // 定義矩陣的「+」(加號)運算子的多載
    Matrix operator+(Matrix x);
   
}; 