#include <iostream>
#include <string>
#include <cctype> // For std::toupper
using namespace std;

int main() {
    string str1;
    int i = 0;
    cout << "請輸入一句英文：";
    getline(cin, str1);

    do
    {
        if (isalnum(str1[i]))
        {
            if (i == 0 || str1[i - 1] == ' ') //當字串是第一個字或是空格後的第一個字時不用變化
            {
            }
            else
            {
                str1[i] = toupper(str1[i]);
            }
        }

        i++;
    } while (i < str1.length());

    cout << str1;

    return 0;
}