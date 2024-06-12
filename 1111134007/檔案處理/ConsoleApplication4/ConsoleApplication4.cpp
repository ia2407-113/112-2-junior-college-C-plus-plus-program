#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    
    ofstream appendfile;  //建立輸出檔的物件

    cout << "開啟test.txt文字檔，並新增資料於檔尾\n";


    // 以寫入模式開啟test.txt檔案,並將新增的資料寫到檔案尾部
    appendfile.open("test.txt", ios_base::app);    //開檔 
    if (appendfile.fail())
    {
        cout << "test.txt檔案無法開啟!\n";
        exit(1);
    }

    string data;
    cout << "輸入(要新增的)資料，以Enter鍵作為結束:\n";//  寫入檔案內容
    getline(cin, data);
    appendfile << data << '\n';
    if (appendfile.fail())  // 寫入失敗時 
    {
        cout << "寫入失敗\n";
        exit(1);
    }

    appendfile.close();     // 關閉檔案  
    if (appendfile.fail())
    {
        cout << "test.txt檔案無法關閉!\n";
        exit(1);
    }


    ifstream readfile;


    // 以唯讀模式開啟test.txt檔案 
    readfile.open("test.txt", ios_base::in); //開檔 
    if (readfile.fail())
    {
        cout << "test.txt檔案無法開啟!\n";
        exit(1);
    }

    char ch;
    cout << "test.txt文字檔內容為:\n";
    while (1)                //讀取檔案內容 
    {
        ch = readfile.get();

        // readfile串流的檔案指標在檔尾時 
        if (readfile.eof())
            break;
        cout << ch;

    }



    // 清除readfile串流的狀態    
    readfile.clear();

    readfile.close();  //  關閉檔案 
    if (readfile.fail())
    {
        cout << "test.txt檔案無法關閉!\n";
        exit(1);
    }

    return 0;
};