#pragma once
#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
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
    virtual void display();
};

// ���W��檫�����O 
class ship_object
{
public:
    string pump_jet;  // �Q�����i���W�� 

    // ship_object���O�غc���禡,�]�w���檫�����
    ship_object();
};

// �j���Ⱦ����O
class airliner :public flight_object, protected ship_object
{
private:
    int passenger;  //�� �ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
    airliner();

    // ��ܤj���Ⱦ������
    virtual void display();
    
};