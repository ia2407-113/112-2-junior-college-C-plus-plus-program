#include "flight_objects.h"

// flight_object ���غc���禡��@
flight_object::flight_object() {
    std::cout << "��@�@�[���檫:\n";
    std::cout << "�W��:";
    std::cin >> name;
    std::cout << "�s�y��:";
    std::cin >> manufacturer;
    std::cout << "�s��:";
    std::cin >> id;
    std::cout << "�r�p���H��:";
    std::cin >> pilot;
    std::cout << "�Ѫo�q(����):";
    std::cin >> kerosene;
}

// flight_object �� display ��k��@
void flight_object::display() {
    std::cout << "\n���檫�W��:" << name << std::endl;
    std::cout << "�s�y��:" << manufacturer << std::endl;
    std::cout << "�s��:" << id << std::endl;
    std::cout << "�r�p���H��:" << pilot << std::endl;
    std::cout << "�Ѫo�q(����):" << kerosene << std::endl;
}

// ship_object ���غc���禡��@
ship_object::ship_object() {
    std::cout << "�Q�����i���W��:";
    std::cin >> pump_jet;
}

// airliner ���غc���禡��@
airliner::airliner() {
    std::cout << "���ȤH��:";
    std::cin >> passenger;
    std::cout << "�A�ȤH�����ƥ�:";
    std::cin >> service_person;
}

// airliner �� display ��k��@
void airliner::display() {
    std::cout << "�Q�����i���W��:" << pump_jet << std::endl;
    std::cout << "���ȤH��:" << passenger << std::endl;
    std::cout << "�A�ȤH�����ƥ�:" << service_person << std::endl;
}
