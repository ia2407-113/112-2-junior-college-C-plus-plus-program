#pragma once
#include<iostream>
#include<string>
#include "flight_object.h"
#include  "ship_object.h"
using namespace std;

class airliner :public flight_object, protected ship_object
{
private:
    int passenger;
      //�� �ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
    airliner();
    /* {
        cout << "���ȤH��:";
        cin >> passenger;
        cout << "�A�ȤH�����ƥ�:";
        cin >> service_person;
     }*/

    // ��ܤj���Ⱦ������
    void display();
    /* {
        cout << "�Q�����i���W��:" << pump_jet << endl;
        cout << "���ȤH��:" << passenger << endl;
        cout << "�A�ȤH�����ƥ�:" << service_person << endl;
    }*/

};
