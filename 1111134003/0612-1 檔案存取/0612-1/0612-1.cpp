// 0612-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 寫入檔案
    ofstream writeFile("test.txt", ios_base::app); // 打開檔案以附加方式寫入
    if (!writeFile.is_open()) {
        cout << "無法開啟檔案!" << endl;
        return 1;
    }

    string data;
    cout << "請輸入要新增的資料，按 Enter 鍵結束:" << endl;
    getline(cin, data);
    writeFile << data << endl; // 寫入資料到檔案
    writeFile.close(); // 關閉檔案

    // 重新讀取檔案並顯示內容
    ifstream readFile("test.txt"); // 打開檔案以讀取方式
    if (!readFile.is_open()) {
        cout << "無法開啟檔案!" << endl;
        return 1;
    }

    cout << "檔案內容為:" << endl;
    string line;
    while (getline(readFile, line)) { // 逐行讀取檔案內容並顯示
        cout << line << endl;
    }

    readFile.close(); // 關閉檔案

    return 0;
}