#include <iostream>
#include <string>
#include "air.h" // �]�t�۩w�q�����Y�ɮ� "air.h"�A�䤤�w�q�F���檫�����O���������e
using namespace std;

// �w�q���檫�����O�������禡

// ���檫�����O���غc�l
flight_object::flight_object()
{
    cout << "��@�@�[���檫:\n"; // ���ܥΤ᥿�b�Ыؤ@�ӭ��檫��
    cout << "�W��:"; // ���ܥΤ��J�W��
    cin >> name; // Ū���Τ��J���W��
    cout << "�s�y��:"; // ���ܥΤ��J�s�y��
    cin >> manufacturer; // Ū���Τ��J���s�y��
    cout << "�s��:"; // ���ܥΤ��J�s��
    cin >> id; // Ū���Τ��J���s��
    cout << "�r�p���H��:"; // ���ܥΤ��J�r�p���H��
    cin >> pilot; // Ū���Τ��J���r�p���H��
    cout << "�Ѫo�q(����):"; // ���ܥΤ��J�Ѫo�q
    cin >> kerosene; // Ū���Τ��J���Ѫo�q
}

// ���檫�����O���Ѻc�l
flight_object::~flight_object()
{
    cout << "��������Oflight_object���Ѻc���禡.\n"; // ���ܥ��b��������O���Ѻc�l
}

// ��ܭ��檫�骺���
void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl; // ��ܭ��檫�骺�W��
    cout << "�s�y��:" << manufacturer << endl; // ��ܭ��檫�骺�s�y��
    cout << "�s��:" << id << endl; // ��ܭ��檫�骺�s��
    cout << "�r�p���H��:" << pilot << endl; // ��ܭ��檫�骺�r�p���H��
    cout << "�Ѫo�q(����):" << kerosene << endl; // ��ܭ��檫�骺�Ѫo�q
}

// �j���Ⱦ����O���غc�l
airliner::airliner()
{
    cout << "���ȤH��:"; // ���ܥΤ��J���ȤH��
    cin >> passenger; // Ū���Τ��J�����ȤH��
    cout << "�A�ȤH�����ƥ�:"; // ���ܥΤ��J�A�ȤH���ƥ�
    cin >> service_person; // Ū���Τ��J���A�ȤH���ƥ�
}

// �j���Ⱦ����O���Ѻc�l
airliner::~airliner()
{
    cout << "����l���Oairliner���Ѻc���禡\n"; // ���ܥ��b����l���O���Ѻc�l
}

// ��ܤj���Ⱦ������
void airliner::display()
{
    cout << "���ȤH��:" << passenger << endl; // ��ܤj���Ⱦ������ȤH��
    cout << "�A�ȤH�����ƥ�:" << service_person << endl; // ��ܤj���Ⱦ����A�ȤH���ƥ�
}

