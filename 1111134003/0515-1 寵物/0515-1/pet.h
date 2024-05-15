#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class pet
{
public:
    pet(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~pet(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class Employee

#endif
#pragma once
