#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <string>
using namespace std;

class flight_object {
public:
    string name;        // ���檫�W��
    int id;             // ���檫�s��
    int pilot;          // �r�p���H��
    float kerosene;     // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)
    string manufacturer;// �s�y��

    // �إ߭��檫�����
    virtual void create_flight_object() = 0;

    // ��ܭ��檫�����
    virtual void display() = 0;

    // ��U���µ������
    virtual void afterburner(int seconds) = 0;
};

class airliner : public flight_object {
private:
    int passenger;          // ���ȤH��
    int service_person;     // �A�ȤH�����ƥ�

public:
    // �إߤj���Ⱦ����������
    void create_airliner();

    // �إߤj���Ⱦ����������
    void create_flight_object() override;

    // ��ܤj���Ⱦ������
    void display() override;

    // ��U���µ������ (�L�ާ@)
    void afterburner(int seconds) override {}
};

class battleplane : public flight_object {
private:
    string weapon;
    int afterburner_seconds;

public:
    // �إ߾԰������������
    void create_battleplane();

    // �إ߾԰������������
    void create_flight_object() override;

    // ��ܾ԰��������
    void display() override;

    // ��U���µ������
    void afterburner(int seconds) override;
};

#endif // FLIGHT_OBJECT_H
