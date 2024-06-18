#include"circleh.h"
    double circ_1D::compute_circ()
    {
        circ = radius * 2 * pi;
        return circ;
    }



    double pie_2D ::compute_area()
    {
        area = radius * radius * pi;
        return area;
    }




    double cylinder_3D ::compute_volume()
    {
        volume = area * height;
        return volume;
    }

    double cylinder_3D::compute_surface()
    {
        surface = area * 2 + height * circ;
        return surface;
    }



    double cron_3D ::compute_volume()
    {
        volume = (radius * radius * pi * height) / 3;
        return volume;
    }
