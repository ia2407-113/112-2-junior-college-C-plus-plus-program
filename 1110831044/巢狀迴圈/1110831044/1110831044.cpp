#include <iostream>

int main() {
    int rows = 5; // 設定要輸出的行數

    // 外部迴圈，控制輸出的行數，從 0 開始到 rows - 1
    for (int i = 0; i < rows; ++i) {
        for (int j = 1; j <= (2 * rows - 1 - 2 * i); ++j) {// 內部迴圈，控制每行輸出的數字
            std::cout << j;// 輸出目前內部迴圈的迭代變數 j
        }
        std::cout << std::endl;// 換行，開始下一行的輸出
    }

    return 0;
}
