#include <iostream>
#include <string>
#include <map>

int main() {
    std::string input; // 定義一個字符串變量來存儲輸入
    std::map<
        char,       // class Key,
        int         // class T,
                    // class Compare = std::less<Key>,
                    // class Allocator = std::allocator<std::pair<const Key, T>>
    > frequency; // 定義一個map來記錄每個字元出現的次數

    std::cout << "請輸入一列文字: ";
    // 從標準輸入獲取一行文字，包括空格
    std::getline(std::cin, input);

    //for( int c = 0 ; c < 100 ; c++ )    
    //for( char c  : input   )
    // for( int i = 0  ; i < sizeof(input)-1 ; i++ )
    // {
    //      char c = input[i];
    // }
    // 遍歷輸入的字符串，計算每個字元出現的次數
    char c;
    
    int count[96];
    for (int i = 0; i < 96; i++) count[i] = 0;
    for (int i = 0; i < input.size() ; i++)
    {
        c = input[i];
        if (c >= 32 && c <= 127) { // 檢查字元的ASCII值是否在32到127之間
            count[c-32]++;

            //frequency[c]++; // 對應字元的次數加一
        }
    }


    //for (char c : input) {
    //    if (c >= 32 && c <= 127) { // 檢查字元的ASCII值是否在32到127之間
    //        frequency[c]++; // 對應字元的次數加一
    //    }
    //}

    for (int i = 0; i < 96; i++)
    {
        if (count[i] > 0)
        {
            char c = i + 32;
            int a = i + 32;
            std::cout << "字元 '" << c << ":" << a << "' 出現了 " << count[i] << " 次。" << std::endl;
        }
    }

    // 顯示每個字元及其出現次數
    /*for (auto& pair : frequency) {
        std::cout << "字元 '" << pair.first << "' 出現了 " << pair.second << " 次。" << std::endl;
    }*/

    return 0;
}
