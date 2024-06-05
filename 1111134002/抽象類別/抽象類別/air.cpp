#include <iostream>
#include <string>
#include"air.h"
using namespace std;


void airliner::create_airliner()
{
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
    cout << "製造者:";
    cin >> manufacturer;
}

int airliner::afterburner()
{
    return 0;
}
// 建立大型客機的部分資料
// 純虛擬函式create_flight_object的實作內容 
void airliner::create_flight_object()
{
    cout << "建立衍生類別airliner物件的資料\n";
    cout << "實作一架大型客機:\n";
    cout << "名稱:";
    cin >> name;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}

// 顯示大型客機的資料
// 純虛擬函式display的實作內容 
void airliner::display()
{
    cout << "\n顯示衍生類別airliner物件的資料\n";
    cout << "大型客機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}



// 戰鬥機類別 

    // 建立戰鬥機的部分資料 
void battleplane::create_battleplane()
{
    cout << "武器名稱:";
    cin >> weapon;
    cout << "製造者:";
    cin >> manufacturer;
}

int battleplane::afterburner()
{
    return afterburner_time;
}

// 建立戰鬥機的部分資料
// 純虛擬函式create_flight_object的實作內容 
void battleplane::create_flight_object()
{
    cout << "\n建立衍生類別battleplane物件的資料\n";
    cout << "實作一架戰鬥機:\n";
    cout << "名稱:";
    cin >> name;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
    cout << "後燃氣時間(秒):";
    cin >> afterburner_time;
}

// 顯示戰鬥機的資料
// 純虛擬函式display的實作內容     
void battleplane::display()
{
    cout << "\n顯示衍生類別battleplane物件的資料\n";
    cout << "戰鬥機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
    cout << "後燃氣時間:" << afterburner() << endl;
}