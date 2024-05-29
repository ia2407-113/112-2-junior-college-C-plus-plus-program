#pragma once
#include<iostream>
#include<string>
#include "flight_object.h"
#include  "ship_object.h"
using namespace std;

class airliner :public flight_object, protected ship_object
{
private:
    int passenger;
      //乘 客人數   
    int service_person;  // 服務人員的數目 

public:
    // airliner類別建構元函式,設定大型客機的資料 
    airliner();
    /* {
        cout << "乘客人數:";
        cin >> passenger;
        cout << "服務人員的數目:";
        cin >> service_person;
     }*/

    // 顯示大型客機的資料
    void display();
    /* {
        cout << "噴水推進器名稱:" << pump_jet << endl;
        cout << "乘客人數:" << passenger << endl;
        cout << "服務人員的數目:" << service_person << endl;
    }*/

};
