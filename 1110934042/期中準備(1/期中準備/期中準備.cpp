#include <iostream>
#include "geometry.h"

int main() {
    double radius, height;
    std::cout << "輸入半徑和高度： ";
    std::cin >> radius >> height;

    Cylinder_3D cylinder(radius, height);
    Cron_3D cone(radius, height);

    std::cout << "底部面積: " << cylinder.compute_area() << std::endl;
    std::cout << "圓柱體機: " << cylinder.compute_volume() << std::endl;
    std::cout << "援助面積: " << cylinder.compute_surface() << std::endl;
    std::cout << "錐體體積: " << cone.compute_volume() << std::endl;

    return 0;
}
