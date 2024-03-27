#include <iostream>
#include <string>
#include <map>

int main() {
    std::string input;
    std::map<char, int> charCount;
    std::cout << "請輸入 ";
    std::getline(std::cin, input);
    for (char c : input) {
        if (c >= 32 && c <= 127) {
            charCount[c]++;
        }
    }
    for (const auto& pair : charCount) {
        std::cout << pair.first << " 出現的次數為: " << pair.second << std::endl;
    }
    return 0;
}
