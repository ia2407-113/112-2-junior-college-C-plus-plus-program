
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    string  str2 = " ";
    int result, len;
    cout << "輸入一句英文句子:";
    getline(cin, str1);
    len = str1.length();
    for (size_t i = 0; i < len; i++)
    {
        str1[i] = toupper(str1[i]);
    }
    for (size_t i = 0; i < 50; i++)
    {
        result = str1.find(str2, i);
        if (result > 0)
        {
            result += 1;
            str1[result] = tolower(str1[result]);
        }
    }
    str1[0] = tolower(str1[0]);
    cout << str1;

    return 0;
}
//isalpha(char c) 函數用於檢查一個字符是否為字母。如果 c 是字母（即大寫字母或小寫字母），則返回非零值（通常是1）；否則，返回0。
//tolower(char c) 函數與 toupper 相反，它將大寫字母轉換為小寫字母。
//toupper(char c) 函數會將小寫字母轉換為大寫字母。如果 c 是小寫字母，則返回相應的大寫字母；否則，返回 c 自身。


