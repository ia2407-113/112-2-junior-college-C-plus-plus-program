#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);//輸入一句話英文
    int a;
    a = str1.length();
    for (int i = 0; i < a; i++)
    {
        str1[i] = toupper(str1[i]);//小寫改大寫
    }
    str1[0] = tolower(str1[0]);
    for (int i = 0; i < a; i++)
    {
        if (str1[i] == ' ') //找空白
            str1[i + 1] = tolower(str1[i + 1]);//大寫改小寫
    }
    cout << str1;
}