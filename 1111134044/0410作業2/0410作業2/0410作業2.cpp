#include <iostream>
#include<string>
using namespace std;
void volume(int* a);
void volume(float* b);
void volume(float* c, float* d);
void volume(float* e, float* f, float* g);
int main()
{
    int a;
    float b;
    float c, d;
    float e, f, g;
    cout << "輸入立方體長寬高";
    cin >> a;
    volume(&a);

    cout << "輸入球體半徑";
    cin >> b;
    volume(&b);
    cout << "請輸入圓柱體半徑與高" << "\n";
    cin >> c;
    cin >> d;
    volume(&c, &d);

    cout << "請輸入長方體半徑與高" << "\n";
    cin >> e;
    cin >> f;
    cin >> g;
    volume(&e, &f, &g);
}
void volume(int* a)
{
    int z;
    z = *a * *a * *a;
    cout << "立方體體積" << z << "\n";

}
void volume(float* b)
{
    float z2;
    z2 = 1.33333 * 3.14159 * *b * *b * *b;
    cout << "球體體積" << z2 << "\n";
}
void volume(float* C, float* D)
{
    float M3;
    M3 = *C * *C * 3.14 * *D;
    cout << "圓柱體體積:" << M3 << "\n";

}

void volume(float* E, float* F, float* G)
{
    int z4;
    z4 = *E * *F * *G;
    cout << "長方體體積:" << z4 << "\n";

}