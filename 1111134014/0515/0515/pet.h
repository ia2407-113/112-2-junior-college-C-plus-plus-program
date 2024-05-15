// Fig. 9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" 

class pet
{
public:
    pet(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~pet(); 
private:
    std::string firstName; 
    std::string lastName; 
    const Date birthDate; 
    const Date adopDate; 
}; 

#endif
#pragma once
