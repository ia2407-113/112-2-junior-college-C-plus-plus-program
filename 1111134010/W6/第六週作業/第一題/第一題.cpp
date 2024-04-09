#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);
    int a;
    a = str1.length();
    for (size_t i = 1; i < a; i++)
    {
        str1[i] = toupper(str1[i]);
    }
    for (size_t i = 0; i < a; i++)
    {
        if (str1[i] == ' ')
            str1[i + 1] = tolower(str1[i + 1]);
    }
    cout << str1;
}