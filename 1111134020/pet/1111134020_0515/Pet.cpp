//Pet.cpp  Pet class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
#include "Time.h"
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfAdopt,
    const Time& timeOfFeed)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfAdopt), 
    feedTime(timeOfFeed)// initialize hireDate
{
    // output Employee object to show when constructor is called
    cout << "Pet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << lastName << ", " << firstName << "  adopt: ";
    adoptDate.print();
    adoptDate.printROC();
    cout << "  Birthday: ";
    birthDate.print();
    birthDate.printROC();
    cout << "  Feedtime: ";
    feedTime.show();
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << lastName << ", " << firstName << endl;
} // end ~Employee destructor
