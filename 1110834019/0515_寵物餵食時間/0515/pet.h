//Pet.h  PET class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition
#include "time.h"// include Time class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date& , const Time&);
    void print() const;
    void setFeedTime(const Time &);
    void printFeedTime() const;
    ~Pet(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object
    Time feedTime;  // composition: member object
}; // end class Employee

#endif#pragma once
