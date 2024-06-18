#include <iostream>
#include"math.h"
using namespace std;


circ_1D::circ_1D(double r) : radius(r) {}

double circ_1D::getCircumference() const {
    return 2 * pi * radius;
}

// pie_2D 類別方法
pie_2D::pie_2D(double r) : circ_1D(r) {}

double pie_2D::getArea() const {
    return pi * radius * radius;
}

// cylinder_3D 類別方法
cylinder_3D::cylinder_3D(double r, double h) : pie_2D(r), height(h) {}

double cylinder_3D::getVolume() const {
    return getArea() * height;
}

double cylinder_3D::getSurfaceArea() const {
    return 2 * getArea() + getCircumference() * height;
}

// cron_3D 類別方法
cron_3D::cron_3D(double r, double h) : pie_2D(r), height(h) {}

double cron_3D::getVolume() const {
    return (1.0 / 3) * getArea() * height;
}