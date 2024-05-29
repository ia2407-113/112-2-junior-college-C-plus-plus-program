// Demonstrating composition--an object with member objects.
#include <iostream>
#include "date.h"
#include "pet.h" // Employee class definition
#include "Time.h"
using namespace std;

int main()
{
    Date birth(7, 24, 1949), birth1(5, 9, 1974);
    Date adopt1(3, 12, 1965), adopt2(11, 30, 1980);
    Time feedTime1(8, 30), feedTime2(9, 0);   //兩個餵食時間

    Pet parrot1("肥肥", "非洲灰鸚鵡", birth, adopt1, feedTime1),
        parrot2("壯壯", "亞馬遜鸚鵡", birth1, adopt2, feedTime2);

    parrot1.print();
    parrot2.print();

    return 0;
}