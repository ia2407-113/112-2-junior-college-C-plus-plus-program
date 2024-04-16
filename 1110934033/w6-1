#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // for std::toupper

// 函数一：统计字符出现次数
void countCharacters(const std::string& input) {
    std::unordered_map<char, int> charCount;

    // 统计每个字符出现的次数
    for (char c : input) {
        if (c >= 32 && c <= 127) {  // 过滤非显示字符
            charCount[c]++;
        }
    }

    // 输出字符及其出现次数
    for (const auto& pair : charCount) {
        std::cout << "Character '" << pair.first << "' appeared " << pair.second << " times." << std::endl;
    }
}

// 函数二：将每个单词的首字母改成大写
std::string capitalizeFirstLetter(const std::string& sentence) {
    std::string result = sentence;
    bool new
