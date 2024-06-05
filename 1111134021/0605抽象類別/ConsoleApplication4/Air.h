#include <iostream>
#include <string>
using namespace std;

class flight_object
{
public:
    string name;  // 飛行物名稱 
    int id;       // 飛行物編號 
    int pilot;    // 駕駛員人數 
    float kerosene; //煤油量(煤油是飛行物使用的燃料)           
    string manufacturer;  // 製造者
    int afterburnner_time;

    virtual void create_flight_object() = 0;  
    virtual void display() = 0;
    virtual int afterburnner() = 0;
};

// 大型客機類別
class airliner :public flight_object
{
private:
    int passenger;  // 乘客人數   
    int service_person;  // 服務人員的數目 

public:
    void create_airliner();
    virtual void create_flight_object();
    virtual void display();
    virtual int afterburnner();
};

// 戰鬥機類別 
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
