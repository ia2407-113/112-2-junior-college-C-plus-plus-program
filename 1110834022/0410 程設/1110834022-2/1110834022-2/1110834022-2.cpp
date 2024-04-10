// 1110834022-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;

// 立方體體積
float volume(int a) {
	return a * a * a;
}

// 球體體積
float volume(float r) {
	return 4.0f / 3.0f * 3.14159f * r * r * r;
}

// 圓柱體體積
float volume(float r, float h) {
	return 3.14159f * r * r * h;
}

// 長方體體積
float volume(float l, float w, float h) {
	return l * w * h;
}

int main() {
	int a;
	float r, h, l, w;

	// 立方體
	cout << "輸入立方體邊長：";
	cin >> a;
	cout << "立方體體積：" << volume(a) << endl;

	// 球體
	cout << "輸入球體直徑：";
	cin >> r;
	cout << "球體體積：" << volume(r / 2.0f) << endl;

	// 圓柱體
	cout << "輸入圓柱體半徑：";
	cin >> r;
	cout << "輸入圓柱體高度：";
	cin >> h;
	cout << "圓柱體體積：" << volume(r, h) << endl;

	// 長方體
	cout << "輸入長方體長度：";
	cin >> l;
	cout << "輸入長方體寬度：";
	cin >> w;
	cout << "輸入長方體高度：";
	cin >> h;
	cout << "長方體體積：" << volume(l, w, h) << endl;

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
