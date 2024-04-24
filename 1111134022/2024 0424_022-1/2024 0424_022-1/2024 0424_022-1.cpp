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
    struct student* ptr = new struct student;


    student telephone[3], temp;
    for (int i = 0; i < 3; i++)
    {
        cout << "輸入學生的名字:";
        cin >> (*ptr).name;
        cout << "年齡:";
        cin >> (*ptr).age;
        cout << "電話:";
        cin >> (*ptr).tel;
        telephone[i] = (*ptr);
        cout << "學生的名字:" << (*ptr).name;
        cout << "\t年齡:" << (*ptr).age;
        cout << "\t電話:" << (*ptr).tel << endl;

    }

    cout << "排序前的資料:" << endl;
    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    for (i = 1; i <= 2; i++)//執行2(=3-1)個步驟
        for (j = 0; j < 3 - i; j++)//第i步驟,執行3-i次比較
            if (telephone[j].age > telephone[j + 1].age)
            {
                temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
    //若左邊的資料>右邊的資料，則
    //將telephone[j]與telephone[j+1]的
    //所有成員變數之內容互換。
    cout << "排序後的資料:" << endl;

    for (i = 0; i < 3; i++)
        telephone[i].printdata();

    return 0;
}