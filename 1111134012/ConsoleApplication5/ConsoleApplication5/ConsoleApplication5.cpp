#include "Header.h"
#include <iostream>
using namespace std;

int main() {
    double radius, height;

    std::cout << "輸入半徑: ";
    std::cin >> radius;

    std::cout << "輸入高: ";
    std::cin >> height;

    pie_2D pie(radius);
    cylinder_3D cylinder(radius, height);
    cron_3D cone(radius, height);

    std::cout << "圓餅面積 " << pie.getArea() << std::endl;
    std::cout << "圓錐體體積 " << cone.getVolume() << std::endl;
    std::cout << "圓柱體體積 " << cylinder.getVolume() << std::endl;
    std::cout << "圓柱體表面積 " << cylinder.getSurfaceArea() << std::endl;
    

    return 0;
}
