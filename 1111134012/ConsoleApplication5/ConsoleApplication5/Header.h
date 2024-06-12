#pragma once
#include <iostream>
using namespace std;
class circ_1D {  //©Pªø
public:
    circ_1D(double radius);
    double getCircumference() const;

protected:
    double radius, M_PI=3.14;
};

class pie_2D : public circ_1D {  //­±¿n
public:
    pie_2D(double radius);
    double getArea() const;
};

class cylinder_3D : public pie_2D {  //¶ê¬W
public:
    cylinder_3D(double radius, double height);
    double getVolume() const;
    double getSurfaceArea() const;

private:
    double height;
};

class cron_3D : public circ_1D {   //¶êÀ@
public:
    cron_3D(double radius, double height);
    double getVolume() const;

private:
    double height;
};