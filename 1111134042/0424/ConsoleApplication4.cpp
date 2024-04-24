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