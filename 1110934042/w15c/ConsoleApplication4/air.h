#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
class flight_object
{
private:
    string name; // ���檫�W�� 
    int id;      // ���檫�s�� 
    int pilot;   // �r�p���H�� 
    float kerosene; // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 

public:
    // flight_object���O�غc���禡,�]�w���檫�����          
    flight_object();
    // flight_object���O�Ѻc���禡
    ~flight_object();

    // ��ܭ��檫�����
    void display();
};

// �j���Ⱦ����O
class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������  
    airliner();

    // airliner���O�Ѻc���禡
    ~airliner();
    // ��ܤj���Ⱦ������
    void display_airliner();
}; 

class airbus :public airliner
{
private:
    int bath_room;   // �N�D�]�Ƽƥ�     

public:
    // airbus���O�غc���禡,�]�w�Ť��ڤh�Ⱦ������ 
    airbus();

    // ��ܪŤ��ڤh�Ⱦ������
    void display();
};
