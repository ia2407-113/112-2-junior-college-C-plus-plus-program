#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

void shape::area()
{
    name = "�����";
}
void rectangle::date_input()
{
    cout << "\n�p��" << name << "�����n\n";
    cout << "��J" << name << "����";
    cin >> length;
    cout << "��J" << name << "���e";
    cin >> width;
}
void cube::date_input()
{
    cout << "��J" << name << "����";
    cin >> height;
    result = width * length * height;
    cout << "���n" << result;
}