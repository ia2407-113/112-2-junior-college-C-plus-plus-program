#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j;
    struct student
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
    student telephone[3], temp;
    struct student* ptr = new struct student;
    for (i = 0; i < 3; i++)
    {
        cout << "輸入學生的名字:";
        cin >> (*ptr).name;
        cout << "年齡:";
        cin >> (*ptr).age;
        cout << "電話:";
        cin >> (*ptr).tel;

        cout << "學生的名字:" << (*ptr).name;
        cout << "\t年齡:" << (*ptr).age;
        cout << "\t電話:" << (*ptr).tel << endl;
        telephone[i] = *ptr;
    }


    cout << "排序前的資料:" << endl;
    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    for (i = 1; i <= 2; i++)
        for (j = 0; j < 3 - i; j++)
            if (telephone[j].age > telephone[j + 1].age)
            {
                temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }

    cout << "排序後的資料:" << endl;

    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    delete[] ptr;
    ptr = NULL;

    return 0;
}