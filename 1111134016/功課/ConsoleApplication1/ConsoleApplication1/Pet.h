#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" 
#include "Time.h"

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&, const Time&);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
    const Time feedTime;
}; // end class Employee

#endif

