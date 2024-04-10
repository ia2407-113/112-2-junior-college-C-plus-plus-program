// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void volume(int* a);
void volume(float* a);
void volume(float* a, float* b);
void volume(float* a, float* b, float* c);

int main()
{
	int a;
	float b;
	float c, d;
	float e, f, g;
	cout << "請輸入立方體的邊長:";
	cin >> a;
	volume(&a);

	cout << "請輸入球體半徑:";
	cin >> b;
	volume(&b);

	cout << "請輸入圓柱體半徑與高:" << "\n";
	cin >> c;
	cin >> d;
	volume(&c, &d);

	cout << "請輸入長方體長寬高:" << "\n";
	cin >> e;
	cin >> f;
	cin >> g;
	volume(&e, &f, &g);
}
void volume(int* a)
{
	int cub;
	cub = *a * *a * *a;
	cout << "立方體體積是:" << cub;
	cout << "\n";
}
void volume(float* a)
{
	float ball;
	ball = 1.333 * 3.14 * *a * *a * *a;
	cout << "球體體積:" << ball;
	cout << "\n";
}
void volume(float* a, float* b)
{
	float cylinder;
	cylinder = *a * *a * 3.14 * *b;
	cout << "圓柱體體積:" << cylinder;
	cout << "\n";
}
void volume(float* a, float* b, float* c)
{
	int cuboid;
	cuboid = *a * *b * *c;
	cout << "長方體體積:" << cuboid;
	cout << "\n";

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
