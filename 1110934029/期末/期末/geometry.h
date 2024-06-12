
#ifndef GEOMETRY_H
#define GEOMETRY_H

class Circ_1D {
protected:
    double radius;
    const double pi = 3.14;

public:
    Circ_1D(double r);
    double compute_circ();
};

class Pie_2D {
protected:
    double area;
    const double pi = 3.14;

public:
    Pie_2D(double r);
    double compute_area();
};

class Cylinder_3D : public Circ_1D, public Pie_2D {
protected:
    double height, volume, surface;

public:
    Cylinder_3D(double r, double h);
    double compute_volume();
    double compute_surface();
};

class Cron_3D : public Circ_1D {
protected:
    double height, volume;

public:
    Cron_3D(double r, double h);
    double compute_volume();
};

#endif
