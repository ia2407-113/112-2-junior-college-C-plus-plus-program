#include <iostream>
#include <string>
using namespace std;
// ���檫�����O,�O�@�ة�H���O 
   
    void airliner::            create_airliner()
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
    virtual void create_flight_object()
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
    virtual void display()
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
};