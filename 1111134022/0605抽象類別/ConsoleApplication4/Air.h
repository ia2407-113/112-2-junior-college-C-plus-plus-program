#include <iostream>
#include <string>
using namespace std;

class flight_object
{
public:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene; //�Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��
    int afterburnner_time;

    virtual void create_flight_object() = 0;  
    virtual void display() = 0;
    virtual int afterburnner() = 0;
};

// �j���Ⱦ����O
class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    void create_airliner();
    virtual void create_flight_object();
    virtual void display();
    virtual int afterburnner();
};

// �԰������O 
class battleplane :public flight_object
{
private:
    string weapon;
    int temp;

public:
    void create_battleplane();
    virtual int afterburnner();
    virtual void create_flight_object();  
    virtual void display();
};
