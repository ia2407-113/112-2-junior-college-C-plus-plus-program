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
    string manufacturer;
    flight_object();
    void display();
};

// �j���Ⱦ����O
class airliner :public flight_object
{
private:
    int passenger;  // ���ȤH��   
    int service_person;  // �A�ȤH�����ƥ� 
    string manufacturer;
public:
   
    airliner();
    
    void display_airliner();
  
};