#include <iostream>
#include <string>
#include "flight.h"
using namespace std;

// flight_object���O�غc���禡,�]�w���檫�����
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

// ��ܭ��檫�����
void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s�y��:" << manufacturer << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

// ship_object���O�غc���禡,�]�w���檫�����
ship_object::ship_object()
{
    cout << "�Q�����i���W��:";
    cin >> pump_jet;
}

// �j���Ⱦ����O
airliner::airliner()
{
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// ��ܤj���Ⱦ������
void airliner::display()
{
    cout << "�Q�����i���W��:" << pump_jet << endl;
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}