#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    // 將所有字元改成小寫
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // 將每個字的第一個字母改成大寫
    for (int i = 0; i < str.size(); ++i) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;

    return 0;
}