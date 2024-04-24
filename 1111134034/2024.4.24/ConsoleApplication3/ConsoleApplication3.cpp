#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j;

    struct tel_book
    {
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

    struct student
    {
        string name;
        int age;
        string tel;
    };

    student* ptr = new student[3];

    for (int z = 0; z < 3; z++)
    {
        cout << "輸入學生的名字:";
        cin >> ptr[z].name;
        cout << "年齡:";
        cin >> ptr[z].age;
        cout << "電話:";
        cin >> ptr[z].tel;
    }

    tel_book telephone[3];
    tel_book temp;

    cout << "排序前的資料:" << endl;
    for (i = 0; i < 3; i++)
    {
        telephone[i].name = ptr[i].name;
        telephone[i].age = ptr[i].age;
        telephone[i].tel = ptr[i].tel;
        telephone[i].printdata();
    }

    for (i = 1; i <= 2; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            if (telephone[j].age > telephone[j + 1].age)
            {
                temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
        }
    }

    cout << "排序後的資料:" << endl;
    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    delete[] ptr;
    ptr = nullptr;

    return 0;
}



