#include <iostream>
#include <string>
#include <cctype>
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
            if (i == 0 || str1[i - 1] == ' ') 
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

