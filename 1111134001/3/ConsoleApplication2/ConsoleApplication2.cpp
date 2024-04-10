#include <iostream>
#include <string>

int main() {
    const int numFriends = 5;
    std::string names[numFriends];
    std::string phones[numFriends];

    // 輸入朋友的姓名和電話號碼
    for (int i = 0; i < numFriends; i++) {
        std::cout << "請輸入第 " << i + 1 << " 位朋友的姓名：";
        std::getline(std::cin, names[i]);
        std::cout << "請輸入第 " << i + 1 << " 位朋友的電話號碼：";
        std::getline(std::cin, phones[i]);
    }

    // 輸入要查詢的朋友姓名
    std::string queryName;
    std::cout << "請輸入要查詢的朋友姓名：";
    std::getline(std::cin, queryName);

    // 在姓名陣列中查找朋友的位置
    int foundIndex = -1;
    for (int i = 0; i < numFriends; i++) {
        if (names[i] == queryName) {
            foundIndex = i;
            break;
        }
    }

    // 根據查詢結果輸出朋友的電話號碼或提示找不到朋友
    if (foundIndex != -1) {
        std::cout << "找到朋友 " << queryName << " 的電話號碼是：" << phones[foundIndex] << std::endl;
    }
    else {
        std::cout << "找不到朋友 " << queryName << " 的資訊。" << std::endl;
    }

    return 0;
}
