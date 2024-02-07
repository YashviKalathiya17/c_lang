#include <iostream>
#include <string>

using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    int employeeId;
public:
    void setData() {
        cout << "Enter name: ";
        cin.ignore(); // Ignore newline character
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> employeeId;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

// Derived class: Department
class Department : public Employee {
protected:
    string departmentName;
public:
    void setDepartment() {
        cout << "Enter department name: ";
        cin.ignore(); // Ignore newline character
        getline(cin, departmentName);
    }
    void displayDepartment() {
        cout << "Department: " << departmentName << endl;
    }
};

// Derived class: Salary
class Salary : public Department {
protected:
    double salary;
public:
    void setSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaySalary() {
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Salary employee;

    cout << "Enter employee information:" << endl;
    employee.setData();
    employee.setDepartment();
    employee.setSalary();

    cout << "\nEmployee details:" << endl;
    employee.displayData();
    employee.displayDepartment();
    employee.displaySalary();

    return 0;
}
