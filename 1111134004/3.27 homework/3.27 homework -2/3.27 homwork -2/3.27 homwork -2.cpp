// 3.27 homwork -2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string id1, id2;
	int len1, len2;
	cout << "輸入一號身分證字號\n";
	getline(cin, id1);
	cout << "輸入二號身分證字號\n";
	getline(cin, id2);
	len1 = id1.length();
	len2 = id2.length();

	if (len1 != 10 )    //確認格式
		cout << "錯誤身分證格式\n";
	else {     //第二碼辨識男女
		if (id1[1] == '1') 
			cout << "一號身分證為男性\n";
		else if (id1[1] == '2') 
			cout << "一號身分證為女性\n";
		else 
			cout << "一號身分證格式錯誤\n";
	}

	if ( len2 != 10)    //確認格式
		cout << "錯誤身分證格式\n";
	else {     //第二碼辨識男女
		if (id2[1] == '1')
			cout << "二號身分證為男性\n";
		else if (id2[1] == '2')
			cout << "二號身分證為女性\n";
		else
			cout << "二號身分證格式錯誤\n";
	}

	if (id1.substr(2,7) < id2.substr(2, 7))      //第三碼辨識年紀 最後一碼為檢查碼
		cout << "一號年紀比較大";
	else if (id1.substr(2, 7) > id2.substr(2, 7))
		cout << "二號年紀比較大";

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
