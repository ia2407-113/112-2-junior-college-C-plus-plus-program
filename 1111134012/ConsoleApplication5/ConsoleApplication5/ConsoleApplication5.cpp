#include <iostream>
#include <cctype> // 包含這個標頭文件以使用 toupper 函數

using namespace std;

int main() {
    string sentence;
    cout << "請輸入一句英文: ";
    cin >> sentence;

    // 將第一個字母改成大寫
    for (size_t i = 0; i < sentence.length(); ++i) {
        if (i == 0 || isspace(sentence[i - 1])) {
            sentence[i] = toupper(sentence[i]);//toupper是為了把字母轉成大寫
        }
    }

    // 輸出結果
    cout << "處理後的句子: " << sentence << endl;

    return 0;