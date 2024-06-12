// fileIO.cpp
#include "fileIO.h"

void writeFile(const string& filename) {
    ofstream writeFile;

    writeFile.open(filename, ios_base::app);
    if (writeFile.fail()) {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    string data;
    cout << "輸入要新增的資料，以Enter鍵作為結束:\n";
    cin.ignore(); // 清除緩衝區
    getline(cin, data);
    writeFile << data << '\n';   // 寫入檔案內容
    if (writeFile.fail()) {
        cout << "寫入失敗\n";
        exit(1);
    }
    cout << "資料已成功新增至 " << filename << " 檔案!\n";
    writeFile.close(); // 關閉寫入檔案
}

void readFile(const string& filename) {
    ifstream readFile;

    readFile.open(filename, ios_base::in);
    if (readFile.fail()) {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    char ch;
    cout << filename << " 檔案內容為:\n";
    while (readFile.get(ch)) {
        cout << ch;
    }
    cout << endl;
    readFile.close(); // 關閉讀取檔案
}
