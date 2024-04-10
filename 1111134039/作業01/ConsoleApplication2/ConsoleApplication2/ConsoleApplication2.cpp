#include <iostream>
#include <cctype>
#include<string>
#include <numbers>
using namespace std;
int main()
{
	string str1, str2, id1, id2, id3, id4;
	string g = "1";
	int pos = 1;//取第幾個字
	int n = 1;//取多少字
	int r = 2;
	int a = 7;
	cout << "輸入身分證字號(要輸英文)";
	getline(cin, str1);
	cout << "輸入身分證字號(要輸英文)";
	getline(cin, str2);
	id1 = str1.substr(pos, n);
	id2 = str2.substr(pos, n);//substr是取
	id3 = str1.substr(r, a);
	id4 = str2.substr(r, a);
	if (id1 == g)
		cout << str1 << "是男的\n";
	else
		cout << str1 << "是女的\n";
	if (id2 == g)
		cout << str2 << "是男的\n";
	else
		cout << str2 << "是女的\n";

	if (id3 < id4)
		cout << str1 << "比較大\n";
	else
		cout << str2 << "比較大\n";
}
