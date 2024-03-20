// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main() {
    int rows = 5; // 控制行數

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= (2 * rows - 2 * i + 1); ++j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}
