// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cmath> // 需要使用數學函式庫

using namespace std;

// 定義矩陣類別
class Matrix {
private:
    int rows; // 矩陣的列數
    int cols; // 矩陣的行數
    double** data; // 指向矩陣數據的指標

public:
    // 建構子
    Matrix(int r, int c) : rows(r), cols(c) {
        // 動態分配記憶體以保存矩陣數據
        data = new double* [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new double[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0; // 初始化矩陣內容為0
            }
        }
    }

    // 解構子
    ~Matrix() {
        // 釋放動態分配的記憶體
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // 運算子多載，前置一元運算子++
    Matrix& operator++() {
        // 對每個元素取開根號
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                data[i][j] = sqrt(data[i][j]);
            }
        }
        return *this;
    }

    // 友元函式，用來輸出矩陣內容
    friend ostream& operator<<(ostream& os, const Matrix& mat);

    // 存取矩陣元素的方法
    double& operator()(int i, int j) {
        return data[i][j];
    }
};

// 運算子多載，用來輸出矩陣內容
ostream& operator<<(ostream& os, const Matrix& mat) {
    // 將矩陣內容輸出到流中
    for (int i = 0; i < mat.rows; ++i) {
        for (int j = 0; j < mat.cols; ++j) {
            os << mat.data[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

int main() {
    // 建立一個2x2的矩陣
    Matrix mat(2, 2);

    // 初始化矩陣元素
    mat(0, 0) = 1;
    mat(0, 1) = 4;
    mat(1, 0) = 9;
    mat(1, 1) = 16;

    // 輸出原始矩陣
    cout << "原始矩陣:\n" << mat << endl;

    // 使用前置一元運算子++
    ++mat;

    // 輸出開根號後的矩陣
    cout << "開根號後的矩陣:\n" << mat << endl;

    return 0;
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
