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

    tel_book telephone[3] = {
            {"張三",18,"04-2321"},
            {"王五",19,"06-2512"},
            {"李四",18,"02-2226"} };

    tel_book temp; 

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

    return 0;
}