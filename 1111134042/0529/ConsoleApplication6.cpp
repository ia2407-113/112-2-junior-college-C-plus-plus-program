#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string name;
    double shape_area;

public:
    Shape(string name) : name(name), shape_area(0) {}

    virtual void area() = 0;
};

class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(string name) : Shape(name), length(0), width(0) {}

    void data_input() {
        cout << "輸入長方形的長度：";
        cin >> length;
        cout << "輸入長方形的寬度：";
        cin >> width;
    }

    void area() override {
        shape_area = length * width;
        cout << "長方形的面積為：" << shape_area << endl;
    }
};

class Cube : public Rectangle {
private:
    double height;

public:
    Cube(string name) : Rectangle(name), height(0) {}

    void data_input() {
        Rectangle::data_input();
        cout << "輸入立方體的高度：";
        cin >> height;
    }

    void area() override {
        Rectangle::area();
        double volume = length * width * height;
        cout << "立方體的體積為：" << volume << endl;
    }
};

int main() {
    Cube cube("立方體");
    cube.data_input();
    cube.area();
    return 0;
}

