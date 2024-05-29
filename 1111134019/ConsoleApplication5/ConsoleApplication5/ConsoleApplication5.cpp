// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

class flight_objec
{
private:
    string name;
    int shape_area;
   
public:
    // flight_object類別建構元函式,設定飛行物的資料          
    flight_objec()
    {
        cout << "執行父類別flight_object的建構元函式\n";
        cout << "實作一個圖形:\n";
        cout << "圖形名稱:";
        cin >> name;
        cout << "圖形面積:";
        cin >> shape_area;
      
    }

    // flight_object類別解構元函式
    ~flight_objec()
    {
        cout << "執行父類別flight_object的解構元函式.\n";
    }

    void display()
    {
        cout << "\n圖形名稱:" << name << endl;
        cout << "圖形面積:" << shape_area << endl;
        
    }
};

// 大型客機類別
class rectangle:public flight_objec
{
private:
    int length;
    int width;

public:
   
    rectangle()
    {
        cout << "\n執行子類別rectangle的建構元函式\n";
        cout << "長:";
        cin >> length;
        cout << "寬:";
        cin >> width;
    }

    
    ~rectangle()
    {
        cout << "執行子類別rectangle的解構元函式.\n";
    }

    void data_input()
    {
        cout << "長:" << length << endl;
        cout << "寬:" << width << endl;
    }
};

int main()
{
    rectangle rec1;
    rec1.display();
    rec1.data_input();

    return 0;
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
