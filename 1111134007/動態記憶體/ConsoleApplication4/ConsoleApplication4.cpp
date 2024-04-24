// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j;

    struct student
    {
        string name;
        int age;
        string tel;

        void printdata() {
            cout << name << '\t' << age << '\t' << tel << '\t' << endl;
        }
    };

    student* ptr = new student[3]; 

    for (int p = 0; p < 3; p++) {
        cout << "輸入第" << p + 1 << "位同學的名字:";
        cin >> ptr[p].name;
        cout << "年齡:";
        cin >> ptr[p].age;
        cout << "電話:";
        cin >> ptr[p].tel;

        cout << "學生的名字:" << ptr[p].name;
        cout << "\t年齡:" << ptr[p].age;
        cout << "\t電話:" << ptr[p].tel << endl;
    }

    cout << "排序前的資料:" << endl;
    for (i = 0; i < 3; i++)
        ptr[i].printdata();

    for (i = 1; i <= 2; i++) {
        for (j = 0; j < 3 - i; j++) { 
            if (ptr[j].tel > ptr[j + 1].tel) {
                student temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    cout << "排序後的資料:" << endl;
    for (i = 0; i < 3; i++)
        ptr[i].printdata();

    delete[] ptr; 

    return 0;
}
