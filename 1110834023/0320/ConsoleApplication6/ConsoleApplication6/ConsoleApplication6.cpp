#include <iostream>

int main() {
    for (int i = 9; i >= 1; i -= 2) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}
