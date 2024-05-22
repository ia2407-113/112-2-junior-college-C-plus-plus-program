// 作業2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cmath> // 包含cmath以使用sqrt函數

using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    // 建構子
    Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }


    // 定義矩陣的「^」(平方)後置運算子的多載
    Matrix operator^(int)
    {
        Matrix temp(row, column); // 備分後置^運算子執行前的物件內容
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = pow(this->element[i][j], 2);
        return temp; // 回傳平方運算後的矩陣
    }
};

int main()
{
    int i, j, row, column;
    cout << "重新定義「^」後置運算子的多載，使其能應用在矩陣平方上\n";
    cout << "輸入矩陣a的列數(row):";
    cin >> row;
    cout << "輸入矩陣a的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入一" << row << 'x' << column << "矩陣a" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    cout << "執行「b = a^ ;」的順序，是先執行「b = a ;」，然後執行「a^ ;」\n";
    b = a ^ 0;  // 先執行b = a ;，然後再執行 a^ ;  
    cout << "矩陣b的內容為:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "b[" << i << "][" << j << "]=";
            cout << b.element[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "a的內容為:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cout << a.element[i][j] << "\t";
        }
        cout << endl;
    }

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
