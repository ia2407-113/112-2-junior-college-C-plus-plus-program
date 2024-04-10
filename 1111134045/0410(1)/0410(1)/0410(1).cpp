#include <string>
#include <iostream>
using namespace std;
void cacu(int* a);
void cacu(float* b);
void cacu(float* c, float* d);
void cacu(float* e, float* f, float* g);
int main()
{
    int square;
    float ball, pillar1, pillar2, rec1, rec2, rec3;
    cout << "請輸入正方體大小";
    cin >> square;
    cacu(&square);
    cout << "\n\n請輸入球體半徑";
    cin >> ball;
    cacu(&ball);
    cout << "\n\n請輸入圓柱體半徑";
    cin >> pillar1;
    cout << "請輸入圓柱體高";
    cin >> pillar2;
    cacu(&pillar1, &pillar2);
    cout << "\n\n請輸入長方體長";
    cin >> rec1;
    cout << "請輸入長方體寬";
    cin >> rec2;
    cout << "請輸入長方體高";
    cin >> rec3;
    cacu(&rec1, &rec2, &rec3);

}
void cacu(int* a)
{
    *a = *a * *a * *a;
    cout << "\n正方體體積為:" << *a;
}
void cacu(float* b)
{
    *b = 1.333 * 3.14159 * *b * *b * *b;
    cout << "\n球體體積為:" << *b;
}
void cacu(float* c, float* d)
{
    float result;
    result = *c * *c * 3.14159 * *d;
    cout << "\n圓柱體體積為:" << result;
}
void cacu(float* e, float* f, float* g)
{
    float result;
    result = *e * *f * *g;
    cout << "\n長方體體積為" << result;
}