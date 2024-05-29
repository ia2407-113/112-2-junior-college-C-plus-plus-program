#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
class flight_object
{
private:
    string name; // 飛行物名稱 
    int id;      // 飛行物編號 
    int pilot;   // 駕駛員人數 
    float kerosene; // 煤油量(煤油是飛行物使用的燃料) 

public:
    string manufacturer;
    flight_object();
    void display();
};

// 大型客機類別
class airliner :public flight_object
{
private:
    int passenger;  // 乘客人數   
    int service_person;  // 服務人員的數目 
    string manufacturer;
public:
   
    airliner();
    
    void display_airliner();
  
};