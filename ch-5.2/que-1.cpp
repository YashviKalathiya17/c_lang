#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    bool operator<(const Number& other) const {
        return value < other.value;
    }
};

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Number n1(num1);
    Number n2(num2);

    if (n1 < n2) {
        cout << "Second number is greater." << endl;
    } else if (n2 < n1) {
        cout << "First number is greater." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
};

