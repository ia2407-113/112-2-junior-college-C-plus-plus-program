// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

// main.cpp

#include <iostream>
#include "Matrix.h"

int main() {
    int row, column;

    std::cout << "重新定義「+」(加號)運算子多載，使其能應用在矩陣加法上\n";
    std::cout << "輸入矩陣A及B的列數(row):";
    std::cin >> row;
    std::cout << "輸入矩陣A及B的行數(column):";
    std::cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    c = a ^ b; // a和b中的每個元素取最大值

    std::cout << "a^b 矩陣 = \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            std::cout << c.element[i][j] << '\t';
        std::cout << std::endl;
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
