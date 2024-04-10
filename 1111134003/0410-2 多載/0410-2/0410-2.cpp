// 0410-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void volume(int *i);
void volume(float *j);
void volume(float *k, float *h);
void volume(float* a, float* b, float* c);
int main()
{
	int i;
	float j;
	float k, h;
	float a, b,c;
	
	cout << "輸入邊長:" ;
	cin>>i;
	cout << "立方體體積:";
	volume(&i);
	
	cout << "\n輸入半徑:";
	cin >> j;
	cout << "球體體積:";
	volume(&j);

	cout << "\n輸入半徑&高:";
	cin >> k >> h;
	cout << "圓柱體體積:";
	volume(&k, &h);

	cout << "\n輸入長&寬&高:";
	cin >> a >> b >> c;
	cout << "長方體體積:";
	volume(&a, &b,&c);
	return 0;
}

void volume(int *i)
{
	float v = 0;
	v = *i * *i * *i;
	cout << v;
}
void volume(float *j)
{
	float v = 0;
	v = 3.14 * *j * *j * *j * 4 / 3;
	cout << v;
}
void volume(float *k, float *h)
{
	float v = 0;
	v = *k * *k * 3.14 * *h;
	cout << v;
}
void volume(float* a, float* b, float* c)
{
	float v = 0;
	v = *a * *b * *c;
	cout << v;
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
