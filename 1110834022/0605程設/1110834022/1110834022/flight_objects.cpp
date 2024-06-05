#include "flight_objects.h"

// flight_object 的建構元函式實作
flight_object::flight_object() {
    std::cout << "實作一架飛行物:\n";
    std::cout << "名稱:";
    std::cin >> name;
    std::cout << "製造者:";
    std::cin >> manufacturer;
    std::cout << "編號:";
    std::cin >> id;
    std::cout << "駕駛員人數:";
    std::cin >> pilot;
    std::cout << "煤油量(公升):";
    std::cin >> kerosene;
}

// flight_object 的 display 方法實作
void flight_object::display() {
    std::cout << "\n飛行物名稱:" << name << std::endl;
    std::cout << "製造者:" << manufacturer << std::endl;
    std::cout << "編號:" << id << std::endl;
    std::cout << "駕駛員人數:" << pilot << std::endl;
    std::cout << "煤油量(公升):" << kerosene << std::endl;
}

// ship_object 的建構元函式實作
ship_object::ship_object() {
    std::cout << "噴水推進器名稱:";
    std::cin >> pump_jet;
}

// airliner 的建構元函式實作
airliner::airliner() {
    std::cout << "乘客人數:";
    std::cin >> passenger;
    std::cout << "服務人員的數目:";
    std::cin >> service_person;
}

// airliner 的 display 方法實作
void airliner::display() {
    std::cout << "噴水推進器名稱:" << pump_jet << std::endl;
    std::cout << "乘客人數:" << passenger << std::endl;
    std::cout << "服務人員的數目:" << service_person << std::endl;
}
