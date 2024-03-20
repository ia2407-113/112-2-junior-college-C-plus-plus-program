#include <iostream> // 包含標準輸入輸出的標頭文件
using namespace std; // 使用標準命名空間

int main() { // 主函數的開始
    // 巢狀迴圈輸出結果
    for (int i = 9; i >= 1; i -= 2) { // 外部迴圈從9開始遞減到1，每次減2
        // 輸出數字 1 到 i
        for (int j = 1; j <= i; ++j) { // 內部迴圈從1遞增到i
            cout << j; // 輸出目前的數字
        }
        cout << endl; // 換行進入下一行
    }
    return 0; // 程式結束並返回0（代表成功）
}
