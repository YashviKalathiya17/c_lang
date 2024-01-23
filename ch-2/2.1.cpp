#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin.ignore(); 
        getline(cin, emp_name);
        cout << "Enter Employee Age: ";
        cin >> emp_age;
        cout << "Enter Employee Role: ";
        cin.ignore();
        getline(cin, emp_role);
        cout << "Enter Employee Salary: ";
        cin >> emp_salary;
        cout << "Enter Employee City: ";
        cin.ignore();
        getline(cin, emp_city);
        cout << "Enter Employee Experience (in years): ";
        cin >> emp_experience;
        cout << "Enter Employee Company Name: ";
        cin.ignore();
        getline(cin, emp_company_name);
    }

    void displayDetails() {
        cout << "\nEmployee ID: " << emp_id << "\nName: " << emp_name << "\nAge: " << emp_age
             << "\nRole: " << emp_role << "\nSalary: " << emp_salary << "\nCity: " << emp_city
             << "\nExperience: " << emp_experience << " years\nCompany: " << emp_company_name << "\n\n";
    }
};

int main() {
    
    Employee employees[2];

    
    for (int i = 0; i < 2; ++i) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        employees[i].inputDetails();
    }

    
    for (int i = 0; i < 2; ++i) {
        employees[i].displayDetails();
    }

    
}
