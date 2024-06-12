#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // 宣告型態為ifstream的資料輸入串流物件變數readfile
    // 做為讀取檔案之用 
    ifstream readfile;// 第一步:  建立輸入檔的物件 

    string filename;
    cout << "輸入要開啟的文字檔名稱:";
    cin >> filename;

    // 以唯讀模式開啟檔案 
    readfile.open(filename, ios_base::in);  // 第二步: 開檔  
    if (readfile.fail())  // 檢查檔案能否開啟 
    {
        cout << filename << "檔案無法開啟!\n";
        exit(1);  // exit(1)函式作用為強迫結束程式
    }
    cout << filename << "檔案已開啟!\n";

    // 關閉readfile串流
    readfile.close();
    if (readfile.fail())  // 檔案無法關閉時  
    {
        cout << filename << "檔案無法關閉!\n";
        exit(1);
    }
    cout << filename << "檔案已關閉!\n";

    return 0;
}