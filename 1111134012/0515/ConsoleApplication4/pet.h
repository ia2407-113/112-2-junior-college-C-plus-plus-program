#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "date.h" // include Date class definition

class Employee
{
public:
    Employee(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~Employee(); 
private:
    std::string firstName; 
    std::string lastName; 
    const Date birthDate;
    const Date hireDate; 
}; 

#endif