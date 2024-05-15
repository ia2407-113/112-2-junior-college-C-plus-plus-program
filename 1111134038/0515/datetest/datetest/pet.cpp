// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    hireDate(dateOfHire) // initialize hireDate
{
    // output Employee object to show when constructor is called
    cout << "Pet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << lastName << ", " << firstName << ", " << "adopt : ";
    hireDate.print();
    hireDate.printROC();
    cout  << ", "<<"Birthday: ";
    birthDate.print();
    birthDate.printROC();
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
} // end ~Employee destructor
