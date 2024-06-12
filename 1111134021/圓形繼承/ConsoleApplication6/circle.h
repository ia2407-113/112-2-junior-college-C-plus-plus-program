class circ_1D
{
public:
	double radius, pi = 3.14;
	double compute_circ();
};

class pie_2D :public circ_1D
{
public:
	double area;
	double compute_area();
};

class cylinder_3D :public pie_2D
{
public:
	double height, volume, surface;
	double compute_volume();
	double compute_surface();
};

class cron_3D :public circ_1D
{
public:
	double height, volume;
	double compute_volume();
};