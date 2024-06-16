#include "cron_3D.h"

double cron_3D::compute_volume()
{
    volume =   pi * radius * radius * height / 3;

    return volume;
}
