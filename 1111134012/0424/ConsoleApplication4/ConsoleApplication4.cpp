#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j;
    struct tel_book {
        string name;
        int age;
        string tel;

        void printdata() {
            cout << name << '\t'
                << age << '\t'
                << tel << '\t' << endl;
        }
    };

    tel_book* ptr = new tel_book[3];

    for (i = 0; i < 3; i++) {
        cout << "輸入學生的名字:";
        cin >> ptr[i].name;
        cout << "年齡:";
        cin >> ptr[i].age;
        cout << "電話:";
        cin >> ptr[i].tel;

        cout << "學生的名字:" << ptr[i].name;
        cout << "\t年齡:" << ptr[i].age;
        cout << "\t電話:" << ptr[i].tel << endl;
    }

    tel_book temp;

    cout << "排序前的資料:" << endl;

    for (i = 0; i < 3; i++) {
        ptr[i].printdata();
    }

    for (i = 1; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (ptr[j].age > ptr[j + 1].age) {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    cout << "排序後的資料:" << endl;

    for (i = 0; i < 3; i++) {
        ptr[i].printdata();
    }

    // 釋放動態分配的記憶體
    delete[] ptr;

    return 0;
}
