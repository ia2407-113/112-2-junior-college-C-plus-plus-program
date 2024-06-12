#include <iostream>
#include "geometry.h"

int main() {
    double radius, height;
    std::cout << "輸入半徑: ";
    std::cin >> radius;

    std::cout << "輸入高度: ";
    std::cin >> height;

    Cylinder_3D cylinder(radius, height);
    Cron_3D cone(radius, height);

    std::cout << "圓面積: " << cylinder.compute_area() << std::endl;
    std::cout << "圓柱體積: " << cylinder.compute_volume() << std::endl;
    std::cout << "圓柱表面積: " << cylinder.compute_surface() << std::endl;
    std::cout << "錐體體積: " << cone.compute_volume() << std::endl;

    return 0;
}