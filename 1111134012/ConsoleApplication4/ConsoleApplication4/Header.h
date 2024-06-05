#pragma once
#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
class flight_object
{
private:
    string name;  // 飛行物名稱 
    int id;       // 飛行物編號 
    int pilot;    // 駕駛員人數 
    float kerosene;  // 煤油量(煤油是飛行物使用的燃料) 

public:
    string manufacturer; //製造者     

    // flight_object類別建構元函式,設定飛行物的資料
    flight_object();

    // 顯示飛行物的資料
    virtual void display();
};

// 水上航行物體類別 
class ship_object
{
public:
    string pump_jet;  // 噴水推進器名稱 

    // ship_object類別建構元函式,設定飛行物的資料
    ship_object();
};

// 大型客機類別
class airliner :public flight_object, protected ship_object
{
private:
    int passenger;  //乘 客人數   
    int service_person;  // 服務人員的數目 

public:
    // airliner類別建構元函式,設定大型客機的資料 
    airliner();

    // 顯示大型客機的資料
    virtual void display();
    
};