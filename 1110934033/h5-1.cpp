#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main() {
    string a;
    cout << "輸入一句英文: ";
    getline(cin, a);

    bool newWord = true;
    for (char& c : a) {
        if (isalpha(c)) {
            if (newWord) {
                c = toupper(c);
                newWord = false;
            } else {
                c = tolower(c);
            }
        } else {
            newWord = true;
        }
    }

    cout << "輸出結果為: " << a << endl;

    return 0;
}
