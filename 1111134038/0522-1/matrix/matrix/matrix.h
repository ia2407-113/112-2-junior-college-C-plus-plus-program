class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
        // �w�q�x�}���u-�v(�t��)�e�m�B��l���h��
        Matrix operator^(int);
   
};

