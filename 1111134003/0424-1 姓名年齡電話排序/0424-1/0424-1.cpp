// 0424-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int i,j;
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
    student telephone[3];
    student temp;
    struct student* ptr = new struct student;
    
    for (i = 0; i <3; i++)
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

    for (i = 1; i < 3; i++)//執行2(=3-1)個步驟
        for (j = 0; j < 3 - i; j++)//第i步驟,執行3-i次比較
            if (telephone[j].age > telephone[j + 1].age)
            {
                temp = telephone[j];
                telephone[j] = telephone[j + 1];
                telephone[j + 1] = temp;
            }
    
    cout << "排序後的資料:" << endl;

    for (i = 0; i < 3; i++)
        telephone[i].printdata();


    // 釋放ptr所指向的動態記憶體
    delete ptr;
    ptr = NULL;  // 將ptr設為空位址0 

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
