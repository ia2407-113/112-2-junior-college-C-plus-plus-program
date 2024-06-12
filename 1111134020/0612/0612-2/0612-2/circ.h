#pragma once
#include <iostream>
using namespace std ;
const double pi = 3.14;

// circ_1D 類別
class circ_1D {
protected:
    double radius;

public:
    circ_1D(double r);
    double getCircumference() const;
};

// pie_2D 類別
class pie_2D : public circ_1D {
public:
    pie_2D(double r);
    double getArea() const;
};

// cylinder_3D 類別
class cylinder_3D : public pie_2D {
private:
    double height;

public:
    cylinder_3D(double r, double h);
    double getVolume() const;
    double getSurfaceArea() const;
};

// cron_3D 類別
class cron_3D : public pie_2D {
private:
    double height;

public:
    cron_3D(double r, double h);
    double getVolume() const;
};


