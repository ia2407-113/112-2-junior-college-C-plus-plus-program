#ifndef FLIGHT_OBJECTS_H
#define FLIGHT_OBJECTS_H

#include <iostream>
#include <string>

class flight_object {
private:
    std::string name;
    int id;
    int pilot;
    float kerosene;
public:
    std::string manufacturer;

    flight_object();

   virtual void display();
};

class ship_object {
public:
    std::string pump_jet;

    ship_object();
};

class airliner : public flight_object, protected ship_object {
private:
    int passenger;
    int service_person;

public:
    airliner();

    void display();
};

#endif
