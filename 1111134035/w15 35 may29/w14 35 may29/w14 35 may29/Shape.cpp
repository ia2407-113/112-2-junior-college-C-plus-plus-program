#include <iostream>
#include <string>
using namespace std;
#include"shape.h"
void shape::area()
{
    cout << result;
}
void rectangle::data_input()
{
    name = "�����";
    cout << "\n�p��" << name << "�����n\n";
    cout << "��J" << name << "����";
    cin >> length;
    cout << "��J" << name << "���e";
    cin >> width;
    result = width * length;
    cout << "���n";
}
void cube::data_input()
{
    name = "������";
    cout << "\n�p��" << name << "�����n\n";
    cout << "��J" << name << "����";
    cin >> length;
    cout << "��J" << name << "���e";
    cin >> width;
    cout << "��J" << name << "����";
    cin >> height;
    result = width * length * height;
    cout << "���n";
}