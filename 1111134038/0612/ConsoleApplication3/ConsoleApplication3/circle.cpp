using namespace std;
#include <iostream>
#include <math.h>
#include"circle.h"
    circ_1D:: circ_1D()
	{
		cout << "�п�J�b�|\n";
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
		cout << "�п�J��\n";
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
		cout << "��P��:" << circ << "\n";
		cout << "�魱�n:" << area << "\n";
		cout << "��W:" << volume << "\n";
		cout << "����n:" << surface << "\n";
		cout << "���@��n:" << volume_cron << "\n";
	}
