using namespace std;
#include <iostream>
#include <math.h>
class circ_1D
{
public:
	double radius, circ, pi = 3.14;


	circ_1D();
	
	double compute_circ();
	
};

class pie_2D :public circ_1D
{
public:
	double area;

	double compute_area();
	
};

class cylinder :public pie_2D
{
public:
	double height, volume, surface;

	cylinder();
	

	double compute_volume();

	double compute_surface();

};

class cron_3D :public cylinder
{
public:
	double volume_cron, hypotenuse;

	double compute_volume_cron();

	void display();
};
