#pragma once
#include<string>
#include<iostream>
using namespace std;

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
    void display();
    
};

