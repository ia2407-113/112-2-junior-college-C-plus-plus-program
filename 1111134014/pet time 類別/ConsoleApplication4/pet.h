#pragma once
//Pet.h  PET class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h" // include Date class definition
#include "Time.h"

using namespace std;

class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&,
        const Time&, const Time&);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    string firstName; // composition: member object
    string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object
    const Time morningFeed;
    const Time nightFeed;
}; // end class Employee

#endif