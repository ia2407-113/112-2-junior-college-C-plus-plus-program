// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), 
    lastName(last), 
    birthDate(dateOfBirth), 
    hireDate(dateOfHire)
{
   
    cout << "Pet object constructor: "
        << firstName << ' ' << lastName << endl;
    print();
} 

void Pet::print() const
{
    cout << lastName << ", " << firstName << "  adopt: ";
    hireDate.print();
    hireDate.printROC();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Pet object destructor: "
        << lastName << ", " << firstName << endl;
} 
