//Pet.cpp 
#include <iostream>
#include "pet.h" 
#include "Date.h" 
#include "Time.h"
using namespace std;
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire,
    const Time& timeOfmorning,const Time& timeOfnight)
    : firstName(first), 
    lastName(last), 
    birthDate(dateOfBirth), 
    hireDate(dateOfHire), 
    morningFeed(timeOfmorning),
    nightFeed(timeOfnight)
{
    
    cout << "\nPet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
} 


void Pet::print() const
{
    cout <<lastName << ", " << firstName << endl << "Adopt: ";
    hireDate.print();
    hireDate.printROC();
    cout << endl << "Birthday: ";
    birthDate.print();
    birthDate.printROC();
    cout << endl << "Feeding time(morning): ";
    morningFeed.printtime();
    cout << "Feeding time(night): ";
    nightFeed.printtime();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Date object destructor for date"
        << lastName << ", " << firstName << endl;
} 