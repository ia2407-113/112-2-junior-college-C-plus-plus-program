#include "flight_objects.h"
#include <iostream>
using namespace std;

// airliner ���O������ƪ���@
void airliner::create_flight_object() {
    cout << "\n�إ߭l�����O airliner ���󪺸��\n";
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

void airliner::create_airliner() {
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
    cout << "�s�y��:";
    cin >> manufacturer;
}

void airliner::display() {
    cout << "\n��ܭl�����O airliner ���󪺸��\n";
    cout << "�j���Ⱦ��W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
    cout << "�s�y��:" << manufacturer << endl;
}

// battleplane ���O������ƪ���@
void battleplane::create_flight_object() {
    cout << "\n�إ߭l�����O battleplane ���󪺸��\n";
    cout << "��@�@�[�԰���:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s��:";
    cin >> id;
    cout << "�r�p���H��:";
    cin >> pilot;
    cout << "�Ѫo�q(����):";
    cin >> kerosene;
}

void battleplane::create_battleplane() {
    cout << "�Z���W��:";
    cin >> weapon;
    cout << "�s�y��:";
    cin >> manufacturer;
}

void battleplane::display() {
    cout << "\n��ܭl�����O battleplane ���󪺸��\n";
    cout << "�԰����W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
    cout << "�Z���W��:" << weapon << endl;
    cout << "�s�y��:" << manufacturer << endl;
    cout << "��U�����:" << afterburner_seconds << " ��" << endl;
}

void battleplane::afterburner(int seconds) {
    afterburner_seconds = seconds;
    cout << "��U���B����: " << seconds << " ��" << endl;
}
