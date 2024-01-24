#include<iostream>
#include<string>

using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setCustomerDetails(int id, const string& name, int age, const string& city, const string& mobile, int validity, const string& telecom) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_mobile_number = mobile;
        cust_simcard_validity = validity;
        cust_telecom_brand_name = telecom;
    }

    void displayCustomerDetails() {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Name: " << cust_name << endl;
        cout << "Age: " << cust_age << endl;
        cout << "City: " << cust_city << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "Simcard Validity (in years): " << cust_simcard_validity << endl;
        cout << "Telecom Brand: " << cust_telecom_brand_name << endl << endl;
    }
};

int main() {
    const int num_customers = 5;
    Customer customers[num_customers];

    for (int i = 0; i < num_customers; ++i) {
        int id, age, validity;
        string name, city, mobile, telecom;

        cout << "Enter details for Customer " << i + 1 << ":" << endl;
        cout << "Customer ID: ";
        cin >> id;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Age: ";
        cin >> age;

        cout << "City: ";
        cin.ignore();
        getline(cin, city);

        cout << "Mobile Number: ";
        cin >> mobile;

        cout << "Simcard Validity (in years): ";
        cin >> validity;

        cout << "Telecom Brand: ";
        cin.ignore();
        getline(cin, telecom);

        customers[i].setCustomerDetails(id, name, age, city, mobile, validity, telecom);
        cout << endl;
    }

    cout << "Customer Details:" << endl;
    for (int i = 0; i < num_customers; ++i) {
        customers[i].displayCustomerDetails();
    }

    
}
