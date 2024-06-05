#include <iostream>
#include <string>
using namespace std;
// ���檫�����O,�O�@�ة�H���O 
class flight_object
{
public:
    string name;
    int id;
    int pilot;
    float kerosene;
    string manufacturer;
    int afterburner_time;
    virtual void create_flight_object() = 0;
    virtual void display() = 0;
    virtual int afterburner() = 0;
};
class airliner :public flight_object
{
private:
    int passenger;
    int service_person;
public:
    void create_airliner();
    virtual void create_flight_object();
    virtual void display();
    virtual int afterburner();
};
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