#include <iostream>
#include <string>
#include"cube.h"
using namespace std;
// ���檫�����O 
void shape::area()
{
    cout << result << endl;
}
// �Ť��ڤh�Ⱦ����O
void rectangle::data_input()
{
    name = "�����";
    cout << "\t�p��" << name << "�����n\n";
    cout << "��J" << name << "����:";
    cin >> length;
    cout << "��J" << name << "���e:";
    cin >> width;
    result = length * width;
    cout << "���n:";
}
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
    result = length * width*height;
    cout << "��n:";

}