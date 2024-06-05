#pragma once
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

    // 建立飛行物的資料
    // create_flight_object為純虛擬函式
    virtual void create_flight_object() = 0;

    // 顯示飛行物的資料
    // display為純虛擬函式     
    virtual void display() = 0;
    virtual int afterburner() = 0;
};

// 大型客機類別
class airliner :public flight_object
{
private:
    int passenger;  // 乘客人數   
    int service_person;// 服務人員的數目 
    
public:
    // 建立大型客機的部分資料    
    void create_airliner();

    // 建立大型客機的部分資料
    // 純虛擬函式create_flight_object的實作內容 
    virtual void create_flight_object();

    // 顯示大型客機的資料
    // 純虛擬函式display的實作內容 
    virtual void display();

    
    virtual int afterburner();
};

// 戰鬥機類別 
class battleplane :public flight_object
{
private:
    string weapon;
    int afterburner_time;

public:
    // 建立戰鬥機的部分資料 
    void create_battleplane();
    // 建立戰鬥機的部分資料
    // 純虛擬函式create_flight_object的實作內容 
    virtual void create_flight_object();
    // 顯示戰鬥機的資料
    // 純虛擬函式display的實作內容     
    virtual void display();

    virtual int afterburner() ;
};