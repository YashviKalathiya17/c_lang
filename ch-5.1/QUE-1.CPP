#include <iostream>
using namespace std;

class Arithmetic {
public:
    void calculate(float a, float b) {
        cout << "Division: " << (a / b) << endl;
    }
    
    void calculate(float a, float b, float c) {
        cout << "Subtraction: " << (a - b - c) << endl;
    }
    
    void calculate(float a, float b, float c, float d) {
        cout << "Multiplication: " << (a * b * c * d) << endl;
    }
    
    void calculate(float a, float b, float c, float d, float e) {
        cout << "Addition: " << (a + b + c + d + e) << endl;
    }
};

int main() {
    Arithmetic obj;
    int numArgs;
    cout << "Enter the number of arguments (2 to 5): ";
    cin >> numArgs;
    
    float args[numArgs];
    cout << "Enter " << numArgs << " arguments separated by spaces: ";
    for (int i = 0; i < numArgs; ++i) {
        cin >> args[i];
    }
    
    switch (numArgs) {
        case 2:
            obj.calculate(args[0], args[1]);
            break;
        case 3:
            obj.calculate(args[0], args[1], args[2]);
            break;
        case 4:
            obj.calculate(args[0], args[1], args[2], args[3]);
            break;
        case 5:
            obj.calculate(args[0], args[1], args[2], args[3], args[4]);
            break;
        default:
            cout << "Invalid number of arguments!" << endl;
            break;
    }
    
    return 0;
}
