#include <iostream>
#include <string>
#include"air.h"
using namespace std;


    void airliner::create_airliner()
    {
        cout << "���ȤH��:";
        cin >> passenger;
        cout << "�A�ȤH�����ƥ�:";
        cin >> service_person;
        cout << "�s�y��:";
        cin >> manufacturer;
    }

    // �إߤj���Ⱦ����������
    // �µ����禡create_flight_object����@���e 
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

    // ��ܤj���Ⱦ������
    // �µ����禡display����@���e 
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
    int airliner::afterburner()
    {
        return 0;
    }
    int battleplane::afterburner()
    {
        return 0;
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
        cout << "��U�����";
        cin >> afterburner_time;
    }

    void battleplane::create_battleplane()
    {
        cout << "�Z���W��:";
        cin >> weapon;
        cout << "�s�y��:";
        cin >> manufacturer;
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
        cout << "��U�����"<< afterburner_time<< endl;
    }
    
