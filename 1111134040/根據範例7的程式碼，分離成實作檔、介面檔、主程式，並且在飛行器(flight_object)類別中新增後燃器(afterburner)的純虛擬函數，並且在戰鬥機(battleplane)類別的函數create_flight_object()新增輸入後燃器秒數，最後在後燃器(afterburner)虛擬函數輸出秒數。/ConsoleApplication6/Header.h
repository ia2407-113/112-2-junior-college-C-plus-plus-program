#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class flight_object
{
public:
    string name;  // ︽嘿 
    int id;       // ︽絪腹 
    int pilot;    // 緍緋计 
    float kerosene; //费猳秖(费猳琌︽ㄏノ縐)           
    string manufacturer;  // 籹硑
    int afterburner_time;

    virtual void create_flight_object() = 0;
    virtual void display() = 0;
    virtual void afterburner() = 0;
};

class airliner :public flight_object
{
private:
    int passenger;  // 计   
    int service_person;  // 狝叭计ヘ 

public:
    void create_airliner();

    virtual void create_flight_object();
    virtual void afterburner();
    virtual void display();
};

class battleplane :public flight_object
{
private:
    string weapon;

public:

    void create_battleplane();
    virtual void create_flight_object();
    virtual void display();
    virtual void afterburner();
};