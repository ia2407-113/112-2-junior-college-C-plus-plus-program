#include <iostream>
#include <string>
#include <unordered_map> // 用于存储字符和出现次数的哈希映射

// 函数：统计字符出现次数
void countCharacters(const std::string& input) {
    std::unordered_map<char, int> charCount; // 创建一个哈希映射，用于存储字符和其出现次数

    // 遍历输入字符串，统计每个字符的出现次数
    for (char c : input) {
        if (c >= 32 && c <= 127) {  // 过滤出 ASCII 值在可显示范围内的字符
            charCount[c]++; // 如果字符不存在于哈希映射中，则初始化其出现次数为 1，否则递增其出现次数
        }
    }

    // 输出每个字符及其出现次数
    for (const auto& pair : charCount) {
        std::cout << "字符 '" << pair.first << "' 出现了 " << pair.second << " 次。" << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "请输入一列文字：";
    std::getline(std::cin, input); // 读取一行输入文字

    countCharacters(input); // 调用统计字符出现次数的函数

    return 0;
}
