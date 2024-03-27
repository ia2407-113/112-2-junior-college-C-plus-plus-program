﻿#include <iostream>
#include <string>
#include <unordered_map>

void countCharacterOccurrences(const std::string& text) {
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char c : text) {
        if (c >= 32 && c <= 127) {  // 檢查字元是否為可列印ASCII
            charCount[c]++;
        }
    }

    // 輸出字元出現次數
    for (const auto& pair : charCount) {
        std::cout << "字元 '" << pair.first << "' 出現 " << pair.second << " 次。" << std::endl;
    }
}

int main() {
    std::string inputText;
    std::cout << "請輸入一行文字（僅限ASCII字符）：";
    std::getline(std::cin, inputText);

    countCharacterOccurrences(inputText);

    return 0;
}
