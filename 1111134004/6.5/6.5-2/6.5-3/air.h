#pragma once
#include <iostream>
#include <string>
using namespace std;
// ���檫�����O,�O�@�ة�H���O 
class flight_object
{
public:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene; //�Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��

    // �إ߭��檫�����
    // create_flight_object���µ����禡
    virtual void create_flight_object() = 0;

    // ��ܭ��檫�����
    // display���µ����禡     
    virtual void display() = 0;

    // ��ܫ�U�������
   // afterburner���µ����禡  
    virtual int afterburner() = 0;
};

// �j���Ⱦ����O
class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    // �إߤj���Ⱦ����������    
    void create_airliner();

    // �إߤj���Ⱦ����������
    // �µ����禡create_flight_object����@���e 
    virtual void create_flight_object();
   
    // ��ܤj���Ⱦ������
    // �µ����禡display����@���e 
    virtual void display();

    // ��ܤj���Ⱦ������
    // �µ����禡afterburner����@���e
    virtual int afterburner();
};

// �԰������O 
class battleplane :public flight_object
{
private:
    string weapon; //�Z�� 
    int afterburner_time; //��U���ɶ�

public:
    // �إ߾԰������������ 
    void create_battleplane();

    // �إ߾԰������������
    // �µ����禡create_flight_object����@���e 
    virtual void create_flight_object();

    // ��ܾ԰��������
    // �µ����禡display����@���e     
    virtual void display();

    // ��ܾ԰��������
    // �µ����禡afterburner����@���e
    virtual int afterburner();
};