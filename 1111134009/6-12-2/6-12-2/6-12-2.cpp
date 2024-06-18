#include <iostream>
#include"math.h"
using namespace std;


int main() {
    double radius, height;

    cout << "請輸入圓的半徑: ";
    cin >> radius;

    pie_2D pie(radius);
    cout << "圓餅面積: " << pie.getArea();

    cout << "\n請輸入圓柱的高度: ";
    cin >> height;
    cylinder_3D cylinder(radius, height);
    cout << "圓柱體積: " << cylinder.getVolume();
    cout << "\n圓柱表面積: " << cylinder.getSurfaceArea();
    cout << "\n請輸入圓錐的高度: ";
    cin >> height;
    cron_3D cone(radius, height);
    cout << "圓錐體積: " << cone.getVolume();

    return 0;
}