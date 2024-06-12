#pragma once
using namespace std;

class circ_1D {
protected:
    double radius;
public:
    circ_1D(double r);
    double getPerimeter() const;
};

class pie_2D : public circ_1D {
public:
    pie_2D(double r);
    double getArea() const;
};

class cylinder_3D : public circ_1D, public pie_2D {
private:
    double height;
public:
    cylinder_3D(double r, double h);
    double getVolume() const;
    double getSurfaceArea() const;
};

class cron_3D : public circ_1D {
private:
    double height;
public:
    cron_3D(double r , double h);
    double getVolume() const;
};
