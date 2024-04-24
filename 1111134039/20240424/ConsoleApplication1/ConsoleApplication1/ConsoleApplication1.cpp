#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    int age;
    string phone;

    void printData() {
        cout << name << '\t' << age << '\t' << phone << endl;
    }
};

int main() {
    int num_contacts;
    cout << "請輸入通訊錄的人數：";
    cin >> num_contacts;

    // 動態配置記憶體以儲存通訊錄結構陣列
    Contact* contacts = new Contact[num_contacts];

    // 使用者輸入每位同學的資訊
    for (int i = 0; i < num_contacts; i++) {
        cout << "請輸入第 " << i + 1 << " 位同學的姓名、年齡和電話（以空格分隔）：";
        cin >> contacts[i].name >> contacts[i].age >> contacts[i].phone;
    }

    // 輸出排序前的通訊錄
    cout << "\n排序前的通訊錄：" << endl;
    for (int i = 0; i < num_contacts; i++) {
        contacts[i].printData();
    }

    // 依照電話號碼排序通訊錄
    for (int i = 0; i < num_contacts - 1; i++) {
        for (int j = 0; j < num_contacts - i - 1; j++) {
            if (contacts[j].phone > contacts[j + 1].phone) {
                // Swap
                Contact temp = contacts[j];
                contacts[j] = contacts[j + 1];
                contacts[j + 1] = temp;
            }
        }
    }

    // 輸出排序後的通訊錄
    cout << "\n排序後的通訊錄：" << endl;
    for (int i = 0; i < num_contacts; i++) {
        contacts[i].printData();
    }

    // 釋放動態配置的記憶體
    delete[] contacts;

    return 0;
}
