// file_operations.cpp

#include <iostream>
#include <fstream>
#include <string>
#include "file_operations.h"

using namespace std;

void writeToFile() {
    ofstream appendfile("test.txt", ios_base::app);
    if (appendfile.fail()) {
        cout << "test.txt檔案無法開啟!\n";
        exit(1);
    }

    string data;
    cout << "輸入(要新增的)資料，以Enter鍵作為結束:\n";
    getline(cin, data);
    appendfile << data << '\n';
    if (appendfile.fail()) {
        cout << "寫入失敗\n";
        exit(1);
    }
    appendfile.close();
}

void readFromFile() {
    string filename;
    cout << "輸入要開啟的文字檔名稱:";
    cin >> filename;

    ifstream readfile(filename, ios_base::in);
    if (readfile.fail()) {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    char ch;
    int filespace = 0;
    cout << filename << "檔案內容為:\n";
    while (readfile.get(ch)) {
        cout << ch;
        filespace++;
    }
    cout << "\n" << filename << "檔案所佔的空間為 " << filespace << " 個位元組(包括換列字元)\n";
    readfile.close();
}
