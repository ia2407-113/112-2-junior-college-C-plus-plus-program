#pragma once
#include <iostream>
#include <string>

//¼ÐÀYÀÉ
using namespace std;

class shape {  //¯ª¤÷
   public:
	   string name;
	   double result;
	   void shape_area();
};

class rectangle :public shape  //¤÷
{
   public:
	   double length, width;
	   void data_input();
};

class cube :public rectangle   //¤l
{
   public:
	   double height;
	   void data_input();
};