#include <iostream>

int main() {
    std::cout << "輸入身高（公分）: ";
    double height;
    std::cin >> height;

    std::cout << "輸入體重（公斤）: ";
    double weight;
    std::cin >> weight;

    double bmi = weight / ((height / 100) * (height / 100));

    std::cout << "BMI為: " << bmi << std::endl;

    return 0;
}
