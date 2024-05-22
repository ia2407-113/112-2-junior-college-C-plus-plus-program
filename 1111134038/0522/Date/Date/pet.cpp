
#include <iostream>
#include "pet.h"
#include "Date.h"
using namespace std;

pet::pet(const string& kind, const string& name,
    const Date& dateOfBirth, const Date& dateOfHire)
    : kind_animal(kind), // initialize firstName
    name_animal(name),
    birthDate(dateOfBirth),
    adoptdate(dateOfHire)
{
}

void pet::print() const
{
    cout << "品種:" << kind_animal << "\t名字:" << name_animal << "\n" << "領養日期:";
    adoptdate.print();
    adoptdate.printROC();
    cout << "\n" << "出生日期:";
    birthDate.print();
    birthDate.printROC();
    cout << endl;
}


pet::~pet()
{
}
