// ���檫�����O

//�Ϊ����O���������
#include <iostream>
#include <string>
#include "�h���~��.h"
void shape::area()
{
	cout << result << endl;
}

//����έ��n���O���������

void rectangle::data_input()
{
	name = "�����";
	cout << "\t�p��" << name << "�����n\n";
	cout << "��J" << name << "����:";
	cin >> length;
	cout << "��J"<< name <<"���e:";
 cin >> width;
	result = length * width;
	cout << "���n:";
}

//������n�����O���������

void cube::data_input()
{
	name = "������";
	cout << "\t�p��" << name << "����n\n";
	cout << "��J" << name << "����:";
	cin >> length;
	cout << "��J" << name << "���e:";
	cin >> width;
	cout << "��J" << name << "����:";
	cin >> height;
	result = length * width * height;
	cout << "��n:";
}