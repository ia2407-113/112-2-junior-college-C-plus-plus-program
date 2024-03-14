#include "lainsolu.h"


int lainsolu(int solu)
{
	s1 chian[6];
	chian[0].toincl = 0;
	chian[0].lau = 0;
	chian[0].lajin = 0;
	chian[1].toincl = 560000;
	chian[2].toincl = 1260000;
	chian[3].toincl = 2520000;
	chian[4].toincl = 4720000;
	chian[5].toincl = 4720001;
	chian[1].lau = 0.05;
	chian[2].lau = 0.12;
	chian[3].lau = 0.2;
	chian[4].lau = 0.3;
	chian[5].lau = 0.4;
	chian[1].lajin = 0;
	chian[2].lajin = 39200;
	chian[3].lajin = 140000;
	chian[4].lajin = 392000;
	chian[5].lajin = 864000;
	chian[0].solu = 0;
	int i = 0;


	chian[0].solu = solu;
	for (i = 0; i < 6; i++)
	{
		if (chian[0].solu >= chian[5].toincl)
		{
			chian[0].solu = chian[0].solu * chian[5].lau - chian[5].lajin;
			break;
		}
		else if ((chian[0].solu > chian[i].toincl + 1) && (chian[0].solu <= chian[i + 1].toincl))
		{

			chian[0].solu = chian[0].solu * chian[i + 1].lau - chian[i + 1].lajin;
		}
	}

	return chian[0].solu;
}
