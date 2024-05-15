// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
pet::pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adopDate(dateOfHire) // initialize hireDate
{
   
    cout << "pet object constructor: "
        << firstName << ' ' << lastName << endl;
} 

void pet::print() const
{
    cout << lastName << ", " << firstName << "  birtherday: ";
    adopDate.print();
    adopDate.printROC();
    cout << "  adopt: ";
    birthDate.print();
    birthDate.printROC();
    cout << endl;
}

pet::~pet()
{
    cout << "pet object destructor: "
        << lastName << ", " << firstName << endl;
} // end ~Employee destructor