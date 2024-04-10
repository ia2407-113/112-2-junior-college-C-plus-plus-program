

#include <iostream>

using namespace std;

int qq(int[]);
int main()
{
	int num[5];
	for (int i = 0; i < 5; i++) {
		cout << "輸入第" << i + 1 << "個整數";
		cin >> num[i];
	}
	qq(num);
	for (int i = 0; i <= 4; i++) {
		cout << num[i];
	}

	return 0;
}
int qq(int n[]) {
	int  ww;

	for (int e = 0; e < 4; e++) {
		for (int i = 0; i <= 3; i++) {
			if (n[i] > n[i + 1]) {
				ww = n[i + 1];
				n[i + 1] = n[i];
				n[i] = ww;

			}
		}

	}


	return ww;
}
