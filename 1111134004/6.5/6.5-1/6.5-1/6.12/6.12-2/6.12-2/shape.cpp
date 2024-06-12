#include <iostream>
#include "shape.h"
using namespace std;
// circ_1D class methods
circ_1D::circ_1D(double r) : radius(r) {}

double circ_1D::getPerimeter() const {
    return 2 * 3.14 * radius;
}

// pie_2D class methods
pie_2D::pie_2D(double r) : circ_1D(r) {}

double pie_2D::getArea() const {
    return 3.14 * radius * radius;
}

// cylinder_3D class methods
cylinder_3D::cylinder_3D(double r, double h) : circ_1D(r), pie_2D(r), height(h) {}

double cylinder_3D::getVolume() const {
    return pie_2D::getArea() * height;
}

double cylinder_3D::getSurfaceArea() const {
    return 2 * pie_2D::getArea() + circ_1D::getPerimeter() * height;
}

// cron_3D class methods
cron_3D::cron_3D(double r, double h) : circ_1D(r),height(h) {}

double cron_3D::getVolume() const {
    return (1.0 / 3) * (3.14 * radius * radius) * height;
}