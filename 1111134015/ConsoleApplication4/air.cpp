#include <iostream>
#include <string>
#include "air.h"
using namespace std;
flight_object::flight_object()
    {
        cout << "��@�@�[���檫:\n";
        cout << "�W��:";
        cin >> name;
        cout << "�s��:";
        cin >> id;
        cout << "�r�p���H��:";
        cin >> pilot;
        cout << "�Ѫo�q(����):";
        cin >> kerosene;
    }
    // ��ܭ��檫�����
    void flight_object::display()
    {
        cout << "\n���檫�W��:" << name << endl;
        cout << "�s��:" << id << endl;
        cout << "�r�p���H��:" << pilot << endl;
        cout << "�Ѫo�q(����):" << kerosene << endl;
    }  

// �j���Ⱦ����O

airliner::airliner()
    {
        cout << "���ȤH��:";
        cin >> passenger;
        cout << "�A�ȤH�����ƥ�:";
        cin >> service_person;
        cout << "�s�y��:";
        cin >> manufacturer;
    }
    void airliner::display_airliner()
    {
        cout << "���ȤH��:" << passenger << endl;
        cout << "�A�ȤH�����ƥ�:" << service_person << endl;
        cout << "�l���O���s�y��" << manufacturer << endl;
    }



