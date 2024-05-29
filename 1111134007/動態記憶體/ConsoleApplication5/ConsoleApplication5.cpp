#include <iostream>
#include <string>
using namespace std;

int main() {

    struct Student {// 定義Student結構
        string name;
        int age;
        string tel;
        void printdata(void)
        {
            cout << name << '\t'
                << age << '\t'
                << tel << '\t' << endl;
        }

    };

    Student* students = new Student[3];// 動態配置記憶體以存儲students資訊

    // 輸入學生資料
    cout << "請輸入學生資料：\n";
    for (int i = 0; i < 3; i++) {
        cout << "姓名：";
        cin >> students[i].name;
        cout << "年齡：";
        cin >> students[i].age;
        cout << "電話：";
        cin >> students[i].tel;
    }

    Student temp;
    // 使用冒泡排序按年齡排序
    for (int i = 1; i <= 2; i++)//執行2(=3-1)個步驟
        for (int j = 0; j < 3 - i; j++)//第i步驟,執行3-i次比較
            if (students[j].tel > students[j + 1].tel)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }


    // 輸出排序後的結果
    for (int i = 0; i < 3; i++)
        students[i].printdata();

    // 釋放動態配置的記憶體
    delete[] students;
    students = NULL;

    return 0;
}