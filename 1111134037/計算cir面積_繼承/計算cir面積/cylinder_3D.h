#pragma once
#include "pie_2D.h"


class cylinder_3D :    public pie_2D
{
public : 
	double height;
	double volume;
	double surface;

	double compute_volume();
	double compute_surface();

};

