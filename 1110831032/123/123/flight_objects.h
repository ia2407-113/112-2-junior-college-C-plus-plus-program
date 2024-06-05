#ifndef FLIGHT_OBJECTS_H
#define FLIGHT_OBJECTS_H

#include <iostream>
#include <string>
using namespace std;

// ���檫�����O, �O�@�ة�H���O 
class flight_object {
public:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene; // �Ѫo�q (�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��

    // �إ߭��檫�����
    // create_flight_object ���µ����禡
    virtual void create_flight_object() = 0;

    // ��ܭ��檫�����
    // display ���µ����禡
    virtual void display() = 0;

    // ��U��
    virtual void afterburner() = 0;
};

// �j���Ⱦ����O
class airliner : public flight_object {
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 
    int afterburner_time; // ��U�����

public:
    // �إߤj���Ⱦ����������    
    void create_airliner();

    // �إߤj���Ⱦ����������
    // �µ����禡 create_flight_object ����@���e 
    virtual void create_flight_object();

    // ��ܤj���Ⱦ������
    // �µ����禡 display ����@���e 
    virtual void display();

    // ��U��
    virtual void afterburner();
};

// �԰������O 
class battleplane : public flight_object {
private:
    string weapon;
    int afterburner_time; // ��U�����

public:
    // �إ߾԰������������ 
    void create_battleplane();

    // �إ߾԰������������
    // �µ����禡 create_flight_object ����@���e 
    virtual void create_flight_object();

    // ��ܾ԰��������
    // �µ����禡 display ����@���e     
    virtual void display();

    // ��U��
    virtual void afterburner();
};

#endif // FLIGHT_OBJECTS_H
