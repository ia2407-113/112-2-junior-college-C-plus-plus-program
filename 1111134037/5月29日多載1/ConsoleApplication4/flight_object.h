#pragma once
#include<string>
#include<iostream>
using namespace std;

class flight_object
{
private:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene;  // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 

public:
    string manufacturer; //�s�y��     

    // flight_object���O�غc���禡,�]�w���檫�����
    flight_object();
    

    // ��ܭ��檫�����
    void display();
    
};

