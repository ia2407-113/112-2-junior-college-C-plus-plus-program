#include <iostream>
#include <cmath> // 引入數學函式庫

using namespace std;

class Matrix {
public:
    int row, column;
    double** element;

    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new double* [m];
        for (int i = 0; i < m; ++i)
            element[i] = new double[n];
    }

    // 定義矩陣的後置一元運算子 % 的多載，用於計算每個元素的開平方根
    Matrix operator%(int dummy) {
        Matrix temp(row, column);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                temp.element[i][j] = sqrt(element[i][j]);
                // 將原始矩陣中的元素開平方根，同時將原始矩陣元素值加一
                element[i][j]++;
            }
        }
        return temp;
    }

    // 顯示矩陣內容
    void display() const {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                cout << element[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int row, column;
    cout << "重新定義後置運算子的多載，將矩陣內容個別開平方根，同時將原始矩陣中的元素值加一：\n";
    cout << "輸入矩陣的列數(row): ";
    cin >> row;
    cout << "輸入矩陣的行數(column): ";
    cin >> column;

    Matrix a(row, column);

    cout << "輸入矩陣的元素:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }
    }

    // 使用後置一元運算子 % 來計算開平方根，同時將原始矩陣中的元素值加一
    cout << "\n矩陣開平方根，並將原始矩陣中的元素值加一:\n";
    Matrix sqrtA = a % 0; // 這裡的 0 是一個虛假的參數，只是為了讓後置一元運算子多載生效
    sqrtA.display();

    cout << "\n原始矩陣中的元素值已加一:\n";
    a.display();

    return 0;
}
