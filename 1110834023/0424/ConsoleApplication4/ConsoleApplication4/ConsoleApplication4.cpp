#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    string tel;
};

int main() {
    int num_students = 3;
    struct student* telephone = new struct student[num_students];

    for (int i = 0; i < num_students; ++i) {
        cout << "輸入第 " << i + 1 << " 位同學的名字:";
        cin >> telephone[i].name;
        cout << "年齡:";
        cin >> telephone[i].age;
        cout << "電話:";
        cin >> telephone[i].tel;
    }

    for (int i = 0; i < num_students - 1; ++i) {
        for (int j = 0; j < num_students - i - 1; ++j) {
            if (telephone[j].tel > telephone[j + 1].tel) {
                struct student temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
        }
    }


    cout << "排序後的通訊錄:" << endl;
    for (int i = 0; i < num_students; ++i) {
        cout << "姓名:" << telephone[i].name << "\t年齡:" << telephone[i].age << "\t電話:" << telephone[i].tel << endl;
    }

    // 釋放ptr所指向的動態記憶體
    delete[] telephone;

    return 0;
}
