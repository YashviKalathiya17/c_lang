#include <iostream>

using namespace std;

// Shape class
class Shape {
protected:
    double width;
    double height;
public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0; // Virtual function to calculate area
};

// Triangle subclass
class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return 0.5 * width * height; // Area of triangle formula
    }
};

// Rectangle subclass
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return width * height; // Area of rectangle formula
    }
};

int main() {
    double width, height;

    cout << "Enter the width and height of the triangle: ";
    cin >> width >> height;
    Triangle triangle(width, height);
    cout << "Area of the triangle: " << triangle.area() << endl;

    cout << "Enter the width and height of the rectangle: ";
    cin >> width >> height;
    Rectangle rectangle(width, height);
    cout << "Area of the rectangle: " << rectangle.area() << endl;

    return 0;
}
