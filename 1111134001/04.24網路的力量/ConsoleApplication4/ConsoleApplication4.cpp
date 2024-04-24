#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    string tel;
};

int main() {
    const int num_students = 3;
    student* students = new student[num_students];

    // 輸入學生資訊
    for (int i = 0; i < num_students; ++i) {
        cout << "請輸入第 " << i + 1 << " 位學生的姓名: ";
        cin >> students[i].name;
        cout << "年齡: ";
        cin >> students[i].age;
        cout << "電話: ";
        cin >> students[i].tel;
    }

    // 依據電話號碼排序
    for (int i = 0; i < num_students - 1; ++i) {
        for (int j = 0; j < num_students - i - 1; ++j) {
            if (students[j].tel > students[j + 1].tel) {
                // 交換學生資訊
                student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // 輸出排序後的通訊資料
    cout << "依據電話號碼排序後的通訊資料:" << endl;
    cout << "姓名\t年齡\t電話" << endl;
    for (int i = 0; i < num_students; ++i) {
        cout << students[i].name << "\t" << students[i].age << "\t" << students[i].tel << endl;
    }

    // 釋放動態配置的記憶體
    delete[] students;

    return 0;
}