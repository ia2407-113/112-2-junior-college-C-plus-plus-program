#include <iostream>
using namespace std;
void volume(int a);//立方
void volume(float a);//球體
void volume(float a, float b);//圓柱
void volume(float a, float b, float c);//長方
int main()
{
    int h;
    float v, s, k, t, d, l;
    cout << "輸入立方體邊的長度:";
    cin >> h;
    volume(h);

    cout << "輸入球體半徑:";
    cin >> v;
    volume(v);

    cout << "輸入圓柱體體積半徑:";
    cin >> s;
    cout << "輸入圓柱體體積高:";
    cin >> k;
    volume(s, k);

    cout << "輸入長方體體積長:";
    cin >> t;
    cout << "輸入長方體體積寬:";
    cin >> d;
    cout << "輸入長方體體積高:";
    cin >> l;
    volume(t, d, l);

}
void volume(int a)
{
    int q;
    q = a * a * a;
    cout << "立方體體積為:" << q;
    cout << "\n";
}
void volume(float a)
{
    float w;
    w = (4.0 / 3.0) * 3.14 * (a * a * a);
    cout << "球體體體積為:" << w;
    cout << "\n";
}
void volume(float a, float b)
{
    float p;
    p = 3.14 * a * a * b;
    cout << "圓柱體體體積為:" << p;
    cout << "\n";
}
void volume(float a, float b, float c)
{
    float o;
    o = a * b * c;
    cout << "長方體體體積為:" << o;
    cout << "\n";
}