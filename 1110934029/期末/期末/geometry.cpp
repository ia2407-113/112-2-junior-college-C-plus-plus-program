#include "geometry.h"
#include <cmath>

Circ_1D::Circ_1D(double r) : radius(r) {}

double Circ_1D::compute_circ() {
    return 2 * pi * radius;
}

Pie_2D::Pie_2D(double r) {
    area = pi * r * r;
}

double Pie_2D::compute_area() {
    return area;
}

Cylinder_3D::Cylinder_3D(double r, double h) : Circ_1D(r), Pie_2D(r), height(h) {}

double Cylinder_3D::compute_volume() {
    return compute_area() * height;
}

double Cylinder_3D::compute_surface() {
    return compute_circ() * height + 2 * compute_area();
}

Cron_3D::Cron_3D(double r, double h) : Circ_1D(r), height(h) {}

double Cron_3D::compute_volume() {
    return (1.0 / 3) * pi * radius * radius * height;
}