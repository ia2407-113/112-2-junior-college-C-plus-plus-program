#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j;
    struct tel_book  //定義結構儲存資料
    {
        string name;
        int age;
        string tel;

        void printdata(void)  //用於輸出結構中資料
        {
            cout << name << '\t'
                << age << '\t'
                << tel << '\t' << endl;
        }
    };

    struct tel_book* ptr = new struct tel_book[3];  //三個tel_book結構的陣列;指標指定給telephone

    for (i = 0; i < 3; i++) {
        cout << "名字:";
        cin >> ptr[i].name;
        cout << "年齡:";
        cin >> ptr[i].age;
        cout << "電話:";
        cin >> ptr[i].tel;
    }

    tel_book temp;   //暫存temp結構
    //氣泡排序
    for (i = 1; i <= 2; i++)    //執行2(=3-1)個步驟
        for (j = 0; j < 3 - i; j++)   //第i步驟,執行3-i次比較
            if (ptr[j].tel > ptr[j + 1].tel)
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
    //若左邊的資料>右邊的資料，則
    //將telephone[j]與telephone[j+1]的
    //所有成員變數之內容互換。

    cout << "排序前的資料:" << endl;   //每個結構調用printdata()輸出
    for (i = 0; i < 3; i++)
        ptr[i].printdata();
    cout << "排序後的資料:" << endl;
    for (i = 0; i < 3; i++)
        ptr[i].printdata();

    // 釋放ptr所指向的動態記憶體
    delete[] ptr;   //回收指標空間
    ptr = NULL;  // 將ptr設為空位址0;回收指標

    return 0;
}
