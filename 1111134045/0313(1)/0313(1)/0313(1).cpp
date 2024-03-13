

#include <iostream>
using namespace std;
int main()
{
    int a=0, b=0, c =0;
    cout << "請輸入三角形a,b,c的邊長(用空格分開)";
	cin >>a >> b>> c;
	if (a+b<=c || a+c<=b || b+c<=a)
		cout << "無法成為三角形";
	else
		cout << "可以成為三角形";
}

