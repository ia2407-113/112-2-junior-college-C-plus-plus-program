// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // 宣告型態為ifstream的資料輸入串流物件變數readfile
    // 做為讀取檔案之用 
    // 第一步:  建立輸入檔的物件 
    ofstream appendfile;
    string filename;
    ifstream fileopen;
    cout << "輸入要開啟的文字檔名稱:";
    cin >> filename;


    appendfile.open(filename, ios_base::app);
    if (appendfile.fail())
    {
        cout << "檔案無法開啟";
        exit(1);
    }
    string input;
    cout << "輸入資料 enter 結束\n";
    // 關閉readfile串流
    cin >> input;
    appendfile << input << '\n';
    
    if (appendfile.fail())  //  
    {
        cout << filename << "檔案無法寫入\n";
        exit(1);
    }


    appendfile.close();

    if (appendfile.fail())  // 檔案無法關閉時  
    {
        cout << filename << "檔案無法關閉!\n";
        exit(1);
    }
    cout << filename << "檔案已關閉!\n";

    fileopen.open(filename, ios_base::in);

    if (fileopen.fail())
    {
        cout << "無法開啟\n";
        exit(1);
    }

    char ch;
    int filsps = 0;
    cout << filename << "文字檔的內容為\n";
    while (1)
    {
        ch = fileopen.get();
        if (fileopen.eof())
        {
            break;
        }
        cout << ch;
        filsps++;
    }
    cout << "文字所站的空間為" << filsps << "個位元組";
    fileopen.clear();
    fileopen.close();
    if (fileopen.fail())
    {
        exit(1);
    }




    return 0;
}