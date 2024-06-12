#include <iostream>
using namespace std;
#include "Header.h"

// circ_1D implementation
circ_1D::circ_1D(double radius) : radius(radius) {}

double circ_1D::getCircumference() const {
    return 2 * M_PI * radius;
}

// pie_2D implementation
pie_2D::pie_2D(double radius) : circ_1D(radius) {}

double pie_2D::getArea() const {
    return M_PI * radius * radius;
}

// cylinder_3D implementation
cylinder_3D::cylinder_3D(double radius, double height) : pie_2D(radius), height(height) {}

double cylinder_3D::getVolume() const {
    return getArea() * height;
}

double cylinder_3D::getSurfaceArea() const {
    return 2 * getArea() + getCircumference() * height;
}

// cron_3D implementation
cron_3D::cron_3D(double radius, double height) : circ_1D(radius), height(height) {}

double cron_3D::getVolume() const {
    return (M_PI * radius * radius * height) / 3;
}