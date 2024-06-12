using namespace std;
#include <iostream>
#include <math.h>
#include"circle.h"
    circ_1D:: circ_1D()
	{
		cout << "請輸入半徑\n";
		cin >> radius;

	}
	double circ_1D:: compute_circ()
	{
		circ = radius * 2 * pi;
		return circ;
	}


	double pie_2D::compute_area()
	{
		area = radius * radius * pi;
		return area;
	}


	cylinder::cylinder()
	{
		cout << "請輸入高\n";
		cin >> height;
	}

	double cylinder::compute_volume()
	{
		volume = circ * height;
		return volume;
	}

	double cylinder:: compute_surface()
	{
		surface = area * 2 + circ * height;
		return surface;
	}




	double cron_3D:: compute_volume_cron()
	{
		volume_cron = circ / 3 * height;

		return volume_cron;
	}

	void cron_3D::display()
	{
		cout << "圓周長:" << circ << "\n";
		cout << "園面積:" << area << "\n";
		cout << "圓柱:" << volume << "\n";
		cout << "圓表面積:" << surface << "\n";
		cout << "圓錐體積:" << volume_cron << "\n";
	}
