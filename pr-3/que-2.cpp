#include <iostream>

using namespace std;

// Base class
class Number {
protected:
    double num;
public:
    Number(double n) : num(n) {}
};

// Subclass for getting square
class Square : public Number {
public:
    Square(double n) : Number(n) {}
    double getSquare() {
        return num * num; // Square of the number
    }
};

// Subclass for getting cube
class Cube : public Number {
public:
    Cube(double n) : Number(n) {}
    double getCube() {
        return num * num * num; // Cube of the number
    }
};

int main() {
    double number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    Square square(number);
    Cube cube(number);
    
    cout << "Square of " << number << " is: " << square.getSquare() << endl;
    cout << "Cube of " << number << " is: " << cube.getCube() << endl;
    
    return 0;
}
