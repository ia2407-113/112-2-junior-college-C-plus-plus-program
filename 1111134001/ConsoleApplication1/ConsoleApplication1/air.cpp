#include <iostream>
#include <string>
#include "air.h"
using namespace std;
// ���檫�����O 
flight_object::flight_object()
    {
        cout << "��@�@�[���檫:\n";
        cout << "�W��:";
        cin >> name;
        cout << "�s�y��:";
        cin >> manufacturer;
        cout << "�s��:";
        cin >> id;
        cout << "�r�p���H��:";
        cin >> pilot;
        cout << "�Ѫo�q(����):";
        cin >> kerosene;
    }
flight_object::~flight_object()
{
    cout << "��������O.\n";
}
    // ��ܭ��檫�����
    void flight_object::display()
    {
        cout << "\n���檫�W��:" << name << endl;
        cout << "�s�y��:" << manufacturer << endl;
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
    }
    airliner::~airliner()
    {
        cout << "����l���O\n";
    }
    // ��ܤj���Ⱦ������
    void airliner::display()
    {
        cout << "���ȤH��:" << passenger << endl;
        cout << "�A�ȤH�����ƥ�:" << service_person << endl;
    }

     // airbus���O�غc���禡,�]�w�Ť��ڤh�Ⱦ������ 
    airbus::airbus()
     {
       cout << "�N�D�Ǥ��ƥ�:" ; 
       cin >> bath_room ;                           
     }  
    
     // ��ܪŤ��ڤh�Ⱦ������
     void airbus::display()
     {
       cout << "�N�D�Ǥ��ƥ�:" << bath_room << endl ;   
     }   