#pragma once
//Pet.h  
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h" 
#include "Time.h"

using namespace std;

class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&,
        const Time&, const Time&);
    void print() const;
    ~Pet(); 
private:
    string firstName; 
    string lastName; 
    const Date birthDate; 
    const Date hireDate; 
    const Time morningFeed;
    const Time nightFeed;
}; 
#endif