#include <iostream>
#include <string>
#include "shape.h"  
using namespace std;

void shape::area()
{
    cout << "�ϧΦW��:";
    cin >> name;
}

void rectangle::data_input()
{
    cout << "�п�J�����骺��:";
    cin >> length;
    cout << "�п�J�����骺�e:";
    cin >> width;
}

void cube::data_input()
{
    cout << "�п�J�����骺��:";
    cin >> height;
    shape_area = height * length * width;
    cout << "�ϧΪ����n��:" << shape_area;
}