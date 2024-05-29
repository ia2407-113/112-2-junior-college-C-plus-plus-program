#include "airliner.h"
#include<iostream>
#include<string>
using namespace std;
airliner::airliner()
{
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
}
void airliner::display()
{
    cout << "噴水推進器名稱:" << pump_jet << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}
ship_object::ship_object()
{
    cout << "噴水推進器名稱:";
    cin >> pump_jet;
}
flight_object::flight_object()
{
    cout << "實作一架飛行物:\n";
    cout << "名稱:";
    cin >> name;
    cout << "製造者:";
    cin >> manufacturer;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}
void flight_object::display()
{
    cout << "\n飛行物名稱:" << name << endl;
    cout << "製造者:" << manufacturer << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
}