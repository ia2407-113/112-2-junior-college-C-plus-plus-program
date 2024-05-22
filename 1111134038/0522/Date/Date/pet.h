#ifndef pet_H
#define pet_H

#include <string>
#include "Date.h"

class pet
{
public:
    pet(const std::string&, const std::string&,
        const Date&, const Date&, int hour, int min);
    void print() const;
    ~pet();
private:
    std::string kind_animal;
    std::string name_animal;
    const Date birthDate;
    const Date adoptdate;
    int feed_hour;
    int feed_minute;
};

#endif
