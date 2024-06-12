#include <iostream>
#include <string>
#include "circle.h"
using namespace std;

double circ_1D::compute_circ()
{
	return radius * 2 * pi;
}

double pie_2D::compute_area()
{
	return radius * radius * pi;
}

double cylinder_3D::compute_volume()
{
	return radius * radius * pi * height;
}

double cylinder_3D::compute_surface()
{
	return 2 * radius * pi * height;
}

double cron_3D::compute_volume()
{
	return radius * radius * pi * height / 3;
}

