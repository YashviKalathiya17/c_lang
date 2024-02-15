#include <iostream>
#include <string>

using namespace std;

class Admin {
protected:
    string company_name;
    double manager_salary;
    double employee_salary;
    int total_staff;
    double total_annual_revenue;
    bool can_terminate;

public:
    void setData() {
        cout << "Enter company name: ";
        cin >> company_name;
        cout << "Enter manager's salary: ";
        cin >> manager_salary;
        cout << "Enter employee's salary: ";
        cin >> employee_salary;
        cout << "Enter total staff: ";
        cin >> total_staff;
        cout << "Enter total annual revenue: ";
        cin >> total_annual_revenue;
        cout << "Can terminate employees? (1 for yes, 0 for no): ";
        cin >> can_terminate;
    }

    virtual void myAccess() {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager's Salary: " << manager_salary << endl;
        cout << "Employee's Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate Employees? " << (can_terminate ? "Yes" : "No") << endl;
    }
};

class Manager : private Admin {
public:
    void myAccess() override {
        cout << "Manager's View:" << endl;
        Admin::myAccess();
    }
};

class Employee : private Manager {
public:
    void myAccess() override {
        cout << "Employee's View:" << endl;
        Admin::myAccess();
    }
};

int main() {
    Employee emp;
    emp.setData();
    emp.myAccess();
    return 0;
}
