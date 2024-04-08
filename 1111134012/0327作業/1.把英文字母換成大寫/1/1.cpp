#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string sentence;

    // 提示輸入英文句子
    cout << "請輸入一句英文：" << endl;
    cin >> sentence;

        bool isFirstChar = true; // 判斷是否為單詞的第一個字母

        // 遍歷句子中的每個字符
    for (char& c : sentence) {
        // 如果是字母（isalpha(c)）且不是單詞的第一個字母，將其轉換為大寫
        if (isalpha(c) && !isFirstChar) {
            c = toupper(c);
        }

        // 如果是空格，將下一個字母視為新的單詞的第一個字母
        isFirstChar = (c == ' ');
    }

    // 輸出修改後的句子
    cout << "修改後的句子：" << sentence << endl;

    return 0;
}

