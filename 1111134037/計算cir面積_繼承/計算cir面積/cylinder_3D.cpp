#include "cylinder_3D.h"

double cylinder_3D::compute_volume()
{

	volume = area * height;

	return volume;
}

double cylinder_3D::compute_surface()
{

	surface = compute_circ() * height + 2 * compute_area() ;

	return surface;
}
