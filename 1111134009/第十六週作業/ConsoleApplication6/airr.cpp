#include <iostream>
#include <string>
#include"air.h"
using namespace std;
// ���檫�����O 



void flight_object::create_flight_object() {};

void flight_object::display() {};

 void flight_object::afterburner() {};

// �j���Ⱦ����O   
void airliner::create_airliner()
{
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
    cout << "�s�y��:";
    cin >> manufacturer;
}
int airliner::afterburner()
{
    return 0;
}
void airliner::create_flight_object()
{
    cout << "�إ߭l�����Oairliner���󪺸��\n";
    cout << "��@�@�[�j���Ⱦ�:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s��:";
    cin >> id;
    cout << "�r�p���H��:";
    cin >> pilot;
    cout << "�Ѫo�q(����):";
    cin >> kerosene;
}

void airliner::display()
{
    cout << "\n��ܭl�����Oairliner���󪺸��\n";
    cout << "�j���Ⱦ��W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
    cout << "�s�y��:" << manufacturer << endl;
}


// �԰������O 
void battleplane::create_battleplane()
{
    cout << "�Z���W��:";
    cin >> weapon;
    cout << "�s�y��:";
    cin >> manufacturer;
}

int battleplane::afterburner()
{
    return afterburner_time;
}
void battleplane::create_flight_object()
{
    cout << "\n�إ߭l�����Obattleplane���󪺸��\n";
    cout << "��@�@�[�԰���:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s��:";
    cin >> id;
    cout << "�r�p���H��:";
    cin >> pilot;
    cout << "�Ѫo�q(����):";
    cin >> kerosene;
    cout << "��U���ɶ�(��):";
    cin >> afterburner_time;
}

void battleplane::display()
{
    cout << "\n��ܭl�����Obattleplane���󪺸��\n";
    cout << "�԰����W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
    cout << "�Z���W��:" << weapon << endl;
    cout << "�s�y��:" << manufacturer << endl;
    cout << "��U���ɶ�:" << afterburner_time << endl;
}


