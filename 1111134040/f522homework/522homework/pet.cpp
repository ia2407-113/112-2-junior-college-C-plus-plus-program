//Pet.cpp  Pet class 
#include <iostream>
#include "pet.h" 
#include "Date.h" 

using namespace std;

Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfAdopt, const Time& feedingTime) //建構子
    : firstName(first),  //初始化以下成員變數
    lastName(last),
    birthDate(dateOfBirth),
    adoptDate(dateOfAdopt),
    feedTime(feedingTime)
{
    cout << "Pet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
}

void Pet::print() const
{
    cout << lastName << ", " << firstName << "  adopt: ";
    adoptDate.print();
    adoptDate.printROC();
    cout << "  Birthday: ";
    birthDate.print();
    birthDate.printROC();
    cout << "  Feed Time: ";
    feedTime.printTime();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Pet object destructor: "
        << lastName << ", " << firstName << endl;
}