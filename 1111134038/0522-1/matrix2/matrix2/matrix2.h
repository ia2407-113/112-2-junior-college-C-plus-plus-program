class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n);
   

    Matrix(char name, int m, int n);
    

    // �w�q�x�}���u+�v(�[��)�B��l���h��
    Matrix operator+(Matrix x);
   
}; 