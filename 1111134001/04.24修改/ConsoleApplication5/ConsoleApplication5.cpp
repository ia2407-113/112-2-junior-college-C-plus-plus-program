#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    string tel;

    void printdata() {
        cout << name << '\t' << age << '\t' << tel << endl;
    }
};

int main() {
    int i, j;
    student telephone[3], temp;

    // 輸入學生資訊
    for (i = 0; i < 3; i++) {
        cout << "輸入學生的名字:";
        cin >> telephone[i].name;
        cout << "年齡:";
        cin >> telephone[i].age;
        cout << "電話:";
        cin >> telephone[i].tel;
        cout << "學生的名字:" << telephone[i].name;
        cout << "\t年齡:" << telephone[i].age;
        cout << "\t電話:" << telephone[i].tel << endl;
    }

    cout << "排序前的資料:" << endl;
    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    // 使用冒泡排序將學生資訊按電話號碼排序
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (telephone[j].tel > telephone[j + 1].tel) {
                temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
        }
    }

    cout << "排序後的資料:" << endl;
    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    return 0;
}