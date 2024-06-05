#include "flight_objects.h"
#include <iostream>
using namespace std;

// airliner 類別成員函數的實作
void airliner::create_flight_object() {
    cout << "\n建立衍生類別 airliner 物件的資料\n";
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

void airliner::create_airliner() {
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
    cout << "製造者:";
    cin >> manufacturer;
}

void airliner::display() {
    cout << "\n顯示衍生類別 airliner 物件的資料\n";
    cout << "大型客機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}

// battleplane 類別成員函數的實作
void battleplane::create_flight_object() {
    cout << "\n建立衍生類別 battleplane 物件的資料\n";
    cout << "實作一架戰鬥機:\n";
    cout << "名稱:";
    cin >> name;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}

void battleplane::create_battleplane() {
    cout << "武器名稱:";
    cin >> weapon;
    cout << "製造者:";
    cin >> manufacturer;
}

void battleplane::display() {
    cout << "\n顯示衍生類別 battleplane 物件的資料\n";
    cout << "戰鬥機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
    cout << "後燃器秒數:" << afterburner_seconds << " 秒" << endl;
}

void battleplane::afterburner(int seconds) {
    afterburner_seconds = seconds;
    cout << "後燃器運行秒數: " << seconds << " 秒" << endl;
}
