
#include <iostream>
using namespace std;
int main()
{
    int n=9;
    int i, j;

        for (i = 1; i <=n; i++)//三角形的行數1~9
        {
            for (j = 1; j <= 9-((i-1)*2); j++)//每行的數字
            {
             cout << j;
            }
            cout << endl;
        }

    
    return 0;
}
