// main.cpp
#include "fileIO.h"

int main() {
    string filename;

    cout << "輸入要寫入的文字檔名稱: ";
    cin >> filename;
    writeFile(filename);
    readFile(filename);

    return 0;
}
