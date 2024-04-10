#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a[5];
    for (int& x : a)
        std::cin >> x;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for (int x : a)
        std::cout << x << ' ';
    return 0;
}
