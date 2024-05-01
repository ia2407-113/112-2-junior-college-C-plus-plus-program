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
    struct tel_book* input = new struct tel_book;
    tel_book tellphone[3];
    for (int i = 0; i < 2; i++)
    {
        cout << "輸入姓名:";
        cin >> (*input).name;
        cout << "輸入年齡:";
        cin >> (*input).age;
        cout << "輸入電話:";
        cin >> (*input).tel;
        cout << "<學生姓名為" << (*input).name;
        cout << ",學生年齡為" << (*input).age;
        cout << ",學生電話為" << (*input).tel << ">\n";
        tellphone[i] = *input;
    }
    tel_book temp;

    for (i = 1; i <= 2; i++)//執行2(=3-1)個步驟
        for (j = 0; j < 3 - i; j++)//第i步驟,執行3-i次比較
            if (tellphone[j].age > tellphone[j + 1].age)
            {
                temp = tellphone[j];
                tellphone[j] = tellphone[j + 1];
                tellphone[j + 1] = temp;
            }

    cout << "排序後的資料:\n";

    for (i = 1; i < 3; i++)
        tellphone[i].printdata();
    delete[] input;
    input = NULL;
    return 0;
}