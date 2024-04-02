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

	if (len1 != 10)    //確認格式
		cout << "錯誤身分證格式\n";
	else {     //第二碼辨識男女
		if (id1[1] == '1')
			cout << "一號身分證為男性\n";
		else if (id1[1] == '2')
			cout << "一號身分證為女性\n";
		else
			cout << "一號身分證格式錯誤\n";
	}

	if (len2 != 10)    //確認格式
		cout << "錯誤身分證格式\n";
	else {     //第二碼辨識男女
		if (id2[1] == '1')
			cout << "二號身分證為男性\n";
		else if (id2[1] == '2')
			cout << "二號身分證為女性\n";
		else
			cout << "二號身分證格式錯誤\n";
	}

	if (id1[2] < id2[2])      //第三碼辨識年紀
		cout << "一號年紀比較大";
	else if (id1[2] > id2[2])
		cout << "二號年紀比較大";

	return 0;
}