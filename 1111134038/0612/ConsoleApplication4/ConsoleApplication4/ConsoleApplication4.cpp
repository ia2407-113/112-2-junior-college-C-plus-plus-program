// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
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
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
