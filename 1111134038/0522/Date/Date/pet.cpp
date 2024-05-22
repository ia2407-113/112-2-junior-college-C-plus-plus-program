
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
    cout << "�~��:" << kind_animal << "\t�W�r:" << name_animal << "\n" << "��i���:";
    adoptdate.print();
    adoptdate.printROC();
    cout << "\n" << "�X�ͤ��:";
    birthDate.print();
    birthDate.printROC();
    cout << endl;
}


pet::~pet()
{
}
