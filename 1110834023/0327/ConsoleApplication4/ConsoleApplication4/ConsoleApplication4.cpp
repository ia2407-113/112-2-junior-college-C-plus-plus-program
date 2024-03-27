#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "請輸入: ";
    std::getline(std::cin, line);
    bool isFirst = true;
    for (char& c : line) {
        if (isFirst && std::isalpha(c)) {
            c = std::toupper(c);
            isFirst = false;
        }
        else if (!std::isalpha(c)) {
            isFirst = true;
        }
    }
    std::cout << line << std::endl;
    return 0;
}   
