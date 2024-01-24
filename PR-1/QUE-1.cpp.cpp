#include<iostream>

class Distance {
private:
    int feet;
public:
    
    void readDistance() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inch;
    }

    void displayDistance() {
        std::cout << "Feet: " << feet << ", Inches: " << inch << std::endl;
    Distance addDistances(const Distance& d2) {
        Distance result;
        result.feet = feet + d2.feet;
        result.inch = inch + d2.inch;

        if (result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch %= 12;
        }

        return result;
    }
};

int main() {
    
    Distance distance1, distance2, sumDistance;

    std::cout << "Enter details for the first distance:\n";
    distance1.readDistance();
    std::cout << "Enter details for the second distance:\n";
    distance2.readDistance();

    sumDistance = distance1.addDistances(distance2);

    std::cout << "\nResult:\n";
    std::cout << "First Distance: ";
    distance1.displayDistance();
    std::cout << "Second Distance: ";
    distance2.displayDistance();
    std::cout << "Sum of Distances: ";
    sumDistance.displayDistance();


}
}
