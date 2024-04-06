#include <iostream>
#include <string>

using namespace std;

int main()
{
    string id1, id2;  // 宣告兩個字串類別，用於存放輸入的身分證字號
    int len1, len2;   // 宣告兩個整數變數，用於存放身分證字號的長度

    
    cout << "輸入一號身分證字號\n";
    getline(cin, id1);// 從標準輸入（鍵盤）讀取一行文字，並存儲在 id1 變數中

    
    cout << "輸入二號身分證字號\n";
    getline(cin, id2);// 從標準輸入（鍵盤）讀取一行文字，並存儲在 id2 變數中

    len1 = id1.length();  // 取得一號身分證字號的長度
    len2 = id2.length();  // 取得二號身分證字號的長度

    
    if (len1 != 10)// 檢查一號身分證字號的格式
        cout << "錯誤身分證格式\n";
    else {  
        if (id1[1] == '1')// 辨識一號身分證字號的性別
            cout << "一號身分證為男性\n";
        else if (id1[1] == '2')
            cout << "一號身分證為女性\n";
        else
            cout << "一號身分證格式錯誤\n";
    }

    
    if (len2 != 10)// 檢查二號身分證字號的格式
        cout << "錯誤身分證格式\n";
    else {  
        if (id2[1] == '1')// 辨識二號身分證字號的性別
            cout << "二號身分證為男性\n";
        else if (id2[1] == '2')
            cout << "二號身分證為女性\n";
        else
            cout << "二號身分證格式錯誤\n";
    }
    
    if (id1.substr(2, 7) < id2.substr(2, 7))// 比較一號身分證字號和二號身分證字號的出生年份（第3碼到第7碼） // 使用 substr() 方法從身分證字號中提取出生年份部分進行比較
        cout << "一號年紀比較大";  // 如果一號出生年份小於二號，輸出一號年紀比較大
    else if (id1.substr(2, 7) > id2.substr(2, 7))
        cout << "二號年紀比較大";  // 如果一號出生年份大於二號，輸出二號年紀比較大

    return 0;
}
