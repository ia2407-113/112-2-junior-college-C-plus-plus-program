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
 
    flight_object();
    ~flight_object();
    
    void display();
};


class airliner :public flight_object //¥HpublicÄ~©Ó¤÷Ãþ§O
{
private:
    int passenger; 
    int service_person; 

public:

    airliner();
    ~airliner();
    void display_airliner();
};
class airbus :public airliner
{
private:
    int bath_room;  
public:
   
    airbus();
    void display();
};
