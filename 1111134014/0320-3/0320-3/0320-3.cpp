

#include <iostream>
using namespace std;

int main()
{
    int key;   
    int miss = 0;
    int cor = 123;
    do//後測迴圈
    {
        cout << "請輸入密碼";
        cin >> key;
        miss ++;

            if (key != cor)
            { 
                cout << "密碼不正確\n";  
            }
            else
            { 
                cout << "密碼正確,歡迎使用本系統\n";
                break;
            }
                
            if (miss >= 3)
            {
                cout << "密碼錯誤三次,系統暫停使用";
                break;
            }
                

    } while (true);

    return 0;
}
