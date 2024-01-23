#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    
    void inputDetails() {
        cout << "Enter Car ID: ";
        cin >> car_id;
        cout << "Enter Car Company Name: ";
        cin.ignore(); 
        getline(cin, car_company_name);
        cout << "Enter Car Color: ";
        getline(cin, car_color);
        cout << "Enter Car Model: ";
        getline(cin, car_model);
        cout << "Enter Car Release Year: ";
        cin >> car_release_year;
    }
    
    void displayDetails() {
        cout << "Car ID: " << car_id << endl;
        cout << "Company: " << car_company_name << endl;
        cout << "Color: " << car_color << endl;
        cout << "Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Car car1, car2;

    cout << "Enter details for Car 1:" << endl;
    car1.inputDetails();
    cout << "Enter details for Car 2:" << endl;
    car2.inputDetails();
    

    cout << "\nCar Details:\n";
    car1.displayDetails();
    car2.displayDetails();
}
