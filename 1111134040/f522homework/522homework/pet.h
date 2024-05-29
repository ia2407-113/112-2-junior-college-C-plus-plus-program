#pragma once
//Pet.h  PET class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition
#include "Time.h"

using namespace std;

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&, const Time&);  //�غc�l
    void print() const;  //�Ω�L�X�d������T
    ~Pet(); //�Ѻc�l
private:
    string firstName;
    string lastName;
    const Date birthDate;
    const Date adoptDate;
    const Time feedTime;
};

#endif
