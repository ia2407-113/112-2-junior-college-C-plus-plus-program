#include <iostream>
#include "pet.h" 
#include "date.h" 
using namespace std;

Employee::Employee(const string& first, const string& last,
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

void Employee::print() const
{
    cout << firstName << ", " << lastName << "  birthday: ";
    hireDate.print();
    hireDate.printROC();
    cout << "  adopt: ";
    birthDate.print();
    birthDate.printROC();
    cout << endl;
} 


Employee::~Employee()
{
    cout << "pet object destructor: "
        << lastName << ", " << firstName << endl;
}