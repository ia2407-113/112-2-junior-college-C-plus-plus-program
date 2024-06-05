#pragma once

#include <iostream>
#include <string>
using namespace std;

class flight_object
{
private:
    string name;  
    int id;      
    int pilot;   
    float kerosene;  

public:
    string manufacturer; 
    flight_object();
    virtual void display();
};


class ship_object
{
public:
    string pump_jet;  
    ship_object();
};


class airliner :public flight_object, protected ship_object
{
private:
    int passenger;  
    int service_person;  

public:
   
    airliner();
    virtual void display();
};
