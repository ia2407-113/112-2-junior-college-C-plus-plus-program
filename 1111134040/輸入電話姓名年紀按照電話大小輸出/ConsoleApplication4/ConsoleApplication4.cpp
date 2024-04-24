// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

struct tel_book {
    string name;
    int age;
    string tel;

    void printdata() {
        cout << name << '\t' << age << '\t' << tel << '\t' << endl;
    }
};

int main() {
    int i, j;
    const int num_students = 3; // 學生數量
    tel_book telephone[num_students];

    // 輸入每位學生的資料
    for (i = 0; i < num_students; i++) {
        cout << "輸入學生的名字:";
        cin >> telephone[i].name;
        cout << "年齡:";
        cin >> telephone[i].age;
        cout << "電話:";
        cin >> telephone[i].tel;
    }

    // 使用氣泡排序按電話號碼排序
    for (i = 0; i < num_students - 1; i++) {
        for (j = 0; j < num_students - i - 1; j++) {
            if (telephone[j].tel > telephone[j + 1].tel) {
                tel_book temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
        }
    }

    // 輸出排序後的資料
    cout << "排序後的資料:" << endl;
    for (i = 0; i < num_students; i++)
        telephone[i].printdata();

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
