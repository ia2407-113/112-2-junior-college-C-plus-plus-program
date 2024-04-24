#include <iostream>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    int age;
    std::string phone;

    void printData() {
        std::cout << name << '\t' << age << '\t' << phone << std::endl;
    }
};

bool compareByPhone(const Student& a, const Student& b) {
    return a.phone < b.phone;
}

int main() {
    const int numStudents = 3;
    Student* students = new Student[numStudents];

    // 輸入資料
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "請輸入第" << i + 1 << "位同學的姓名 年齡 電話：";
        std::cin >> students[i].name >> students[i].age >> students[i].phone;
    }

    // 根據電話號碼排序
    std::sort(students, students + numStudents, compareByPhone);

    // 輸出結果
    std::cout << "依據電話號碼排序後的通訊錄：" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].printData();
    }

    // 釋放動態配置的記憶體
    delete[] students;

    return 0;
}
