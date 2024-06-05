#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class flight_object
{
public:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene; //�Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��
    int afterburner_time;

    virtual void create_flight_object() = 0;
    virtual void display() = 0;
    virtual void afterburner() = 0;
};

class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    void create_airliner();

    virtual void create_flight_object();
    virtual void afterburner();
    virtual void display();
};

class battleplane :public flight_object
{
private:
    string weapon;

public:

    void create_battleplane();
    virtual void create_flight_object();
    virtual void display();
    virtual void afterburner();
};