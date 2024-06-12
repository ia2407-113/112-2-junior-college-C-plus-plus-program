// 0612-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

using namespace std;
#include <iostream>
#include <math.h>
#include"shape.h"
int main()
{
	cron_3D c1;
	c1.compute_circ();
	c1.compute_area();
	c1.compute_volume();
	c1.compute_surface();
	c1.compute_volume_cron();
	c1.display();
	return 0;
}
