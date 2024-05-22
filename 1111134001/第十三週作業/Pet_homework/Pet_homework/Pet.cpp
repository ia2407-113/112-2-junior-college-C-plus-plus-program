//Pet.cpp  Pet class member-function definitions.
#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition
#include "Time.h"
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire,
    const Time& timeOfmorning,const Time& timeOfnight)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    hireDate(dateOfHire), // initialize hireDate
    morningFeed(timeOfmorning),
    nightFeed(timeOfnight)
{
    // output Employee object to show when constructor is called
    cout << "\nPet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
} // end Employee constructor

// print Employee object
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
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Date object destructor for date"
        << lastName << ", " << firstName << endl;
} // end ~Employee destructor
