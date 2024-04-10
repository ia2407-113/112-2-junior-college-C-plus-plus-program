#include <string>
#include <iostream>
using namespace std;
int cacu(int);
float cacu(float);
float cacu(float, float);
float cacu(float, float, float);
int main()
{
	int square;
	float sphere, radius, radiushigh ,lon, wide,high;
	cout << "輸入正方體\n";
	cin >> square;
	cout<< cacu(square) << endl;

	cout << "輸入球體半徑\n";
	cin >> sphere;
	cout << cacu(sphere) << endl;

	cout << "輸入圓柱體半徑和高\n";
	cin >> radius;
	cin >> radiushigh;
	cout << cacu(radius, radiushigh)<<endl;

	cout << "輸入長方體的長和寬和高\n";
	cin >> lon;
	cin >> wide;
	cin >> high;
	cout << cacu(lon,wide,high) << endl;
}
int cacu(int a)
{
	int area;
	area = a * a * a;
	return area;
}
float cacu(float b)
{
	float a;
	a =  3.14 * b*b*b*4/3;
	return a;
}
float cacu(float c, float d)
{
	float r;
	r = (c*c* 3.14) * d;
	return r;
}
float cacu(float e, float f, float g)
{
	float m;
	m = e * f * g;
	return m;
}