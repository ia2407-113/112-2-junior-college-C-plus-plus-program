#include <iostream>
#include <string>
#include"cube.h"
using namespace std;
int main()
{
   cube volume;
   volume.rectangle::data_input();
   volume.area();
   volume.data_input();
   volume.area();
   return 0;
}