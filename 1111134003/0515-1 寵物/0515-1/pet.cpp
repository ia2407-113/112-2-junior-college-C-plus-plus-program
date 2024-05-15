#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
pet::pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfadopt) // initialize hireDate
{
    // output Employee object to show when constructor is called
    cout << "pet object constructor: "
        << firstName << ' ' << lastName << endl;
} // end Employee constructor

// print Employee object
void pet::print() const
{
    cout << lastName << ", " << firstName << "  adopt: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
pet::~pet()
{
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
} // end ~Employee destructor
