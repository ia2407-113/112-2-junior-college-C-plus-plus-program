#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, sentence_backup;  // 宣告兩個字串類別，用於存放輸入的句子和句子的備份
    int back_char = 1;  // 用於判斷是否為單字的首字母，1 表示是，0 表示不是
    int i, len;  // i 用於迴圈計數，len 用於存放句子的長度

    cout << "輸入一句英文";  // 提示使用者輸入英文句子
    getline(cin, sentence);  // 讀取一整行輸入的句子

    sentence_backup = sentence;  // 備份原始輸入的句子
    len = sentence.length();  // 取得句子的長度

    // 遍歷句子的每個字元
    for (i = 0; i < len; i++)
    {
        if (back_char == 1)  // 如果是單字的首字母
        {
            sentence[i + 1] = toupper(sentence[i + 1]);  // 將下一個字元轉換為大寫
            back_char = 0;  // 設定為非首字母，表示此單字後續字母不再是單字首字母
        }

        if (sentence[i + 1] == ' ')  // 如果遇到空格，表示新的單字開始
        {
            back_char = 1;  // 設定為單字的首字母
            i++;  // 跳過空格，直接處理下一個字元（即新的單字的首字母）
        }
    }

    // 輸出原始句子和處理後的句子
    cout << sentence_backup << "轉成" << sentence;

    return 0;
}
