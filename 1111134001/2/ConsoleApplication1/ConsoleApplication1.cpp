#include <iostream>
#include <string>
#include <sstream>

std::string capitalizeNonFirstLetters(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += " ";
        }
        for (size_t i = 0; i < word.length(); i++) {
            if (i == 0) {
                result += word[i];
            }
            else {
                result += std::toupper(word[i]);
            }
        }
    }

    return result;
}

int main() {
    std::string inputSentence;
    std::cout << "請輸入一句英文：";
    std::getline(std::cin, inputSentence);

    std::string capitalizedSentence = capitalizeNonFirstLetters(inputSentence);
    std::cout << "每個單字的非第一個字母大寫的句子為：" << capitalizedSentence << std::endl;

    return 0;
}
