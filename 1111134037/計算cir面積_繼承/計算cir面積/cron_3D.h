#pragma once
#include "circ_1D.h"
class cron_3D :    public circ_1D
{
public : 
	double height;
	double volume;

	double compute_volume();
};

