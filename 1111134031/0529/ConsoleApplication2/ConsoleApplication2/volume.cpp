#include <iostream>
#include<string>
#include"volume.h"	
using namespace std;



	void shape::area()
	{
		cout << result << endl;
	}



	void rectangle::data_input()
	{
		name = "�����";
		cout << "\t�p��" << name << "�����n\n";
		cout << "��J" << name << "����\n";
		cin >> length;
		cout << "��J" << name << "���e\n";
		cin >> width;
		result = length * width;
		cout << "���n";
	};


	void cube::data_input()
	{
		name = "������";
		cout << "\t�p��" << name << "�����n\n";
		cout << "��J" << name << "����:";
		cin >> length;
		cout << "��J" << name << "���e:";
		cin >> width;
		cout << "��J" << name << "����:";
		cin >> height;
		result = length * width * height;
		cout << "��n";
	}

