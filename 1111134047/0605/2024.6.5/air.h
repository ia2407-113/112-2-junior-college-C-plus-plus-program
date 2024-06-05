#include <iostream>
#include <string>
using namespace std;
// ���檫�����O,�O�@�ة�H���O 
class flight_object
{
public:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    int afterburner_time;
    float kerosene; //�Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��
    

    virtual void create_flight_object() = 0;

    // ��ܭ��檫�����
    // display���µ����禡     
    virtual void display() = 0;
    virtual int afterburner() = 0;
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

    virtual int afterburner();
};

// �԰������O 
class battleplane :public flight_object
{
private:
    string weapon;
    
public:

    void create_battleplane();
 
    virtual void create_flight_object();


    virtual void display();    
    virtual int afterburner();

};

