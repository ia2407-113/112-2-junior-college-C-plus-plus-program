#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // 宣告型態為ofstream的資料輸出串流物件變數appendfile
   // 做為寫入檔案之用
    ofstream appendfile;  // 第一步:  建立輸出檔的物件

    cout << "開啟test.txt文字檔，並新增資料於檔尾\n";

    // 以寫入模式開啟test.txt檔案,並將新增的資料寫到檔案尾部
    appendfile.open("test.txt", ios_base::app);    // 第二步: 開檔  app:從檔案結尾繼續增加 
    if (appendfile.fail())
    {
        cout << "test.txt檔案無法開啟!\n";
        exit(1);
    }

    string data;
    cout << "輸入(要新增的)資料，以Enter鍵作為結束:\n";
    getline(cin, data);
    appendfile << data << '\n';   // 第三步: 寫入檔案內容
    if (appendfile.fail())  // 寫入失敗時 
    {
        cout << "寫入失敗\n";
        exit(1);
    }

    appendfile.close();     // 第四步: 關閉檔案  
    if (appendfile.fail())
    {
        cout << "test.txt檔案無法關閉!\n";
        exit(1);
    }

    // 宣告型態為ifstream的資料輸入串流物件變數readfile
    // 做為讀取檔案之用 

    ifstream appendfile_2;  // 第一步:  建立輸入檔的物件

    // 以唯讀模式開啟test.txt檔案 
    appendfile_2.open("test.txt", ios_base::in); // 第二步: 開檔 
    if (appendfile_2.fail())
    {
        cout << "test.txt檔案無法開啟!\n";
        exit(1);
    }

    char ch;
    int filespace = 0;  // 計算檔案所佔用的記憶體空間
    cout << "test.txt文字檔內容為:\n";
    while (1)                // 第三步: 讀取檔案內容 
    {
        ch = appendfile_2.get();

        // readfile串流的檔案指標在檔尾時 
        if (appendfile_2.eof())
            break;
        cout << ch;
        filespace++;
    }
    cout << '\n' << "test.txt文字檔所佔的空間為";
    cout << filespace << "個位元組(包括換列字元)\n";

    // 清除readfile串流的狀態    
    appendfile.clear();

    appendfile.close();  // 第四步: 關閉檔案 
    if (appendfile.fail())
    {
        cout << "test.txt檔案無法關閉!\n";
        exit(1);
    }

    return 0;
}