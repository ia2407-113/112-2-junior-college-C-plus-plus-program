﻿// 非首字大寫.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);
    int a;
    a = str1.length();
    for (int i = 0; i < a; i++)
    {
        str1[i] = toupper(str1[i]);
    }
    str1[0] = tolower(str1[0]);
    for (int i = 0; i < a; i++)
    {
        if (str1[i] == ' ')
            str1[i + 1] = tolower(str1[i + 1]);
    }
    cout << str1;
}
